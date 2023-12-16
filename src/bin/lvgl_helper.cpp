#include "SPI.h"
#include "TFT_eSPI.h"
#include "lvgl_helper.h"

/*------------ LVGL ------------*/
#define MY_DISP_HOR_RES 320 // 显示屏的宽像素
#define MY_DISP_VER_RES 240 // 显示屏的高像素
#define DISP_BUF_SIZE ((MY_DISP_HOR_RES * MY_DISP_VER_RES) / 10)

static lv_disp_draw_buf_t draw_buf;     // 绘制缓冲区的内部图形缓冲区
static lv_color_t buf_1[DISP_BUF_SIZE]; // 缓冲区为屏幕大小的1/10
static lv_color_t *buf1;                // 缓冲区为屏幕大小的1/10
static lv_color_t *buf2;
// Use hardware SPI
TFT_eSPI tft = TFT_eSPI();

/**
 * @brief 初始化显示屏驱动
 */
void disp_drv_init()
{
  /* ------------ 屏幕背光亮度 ------------*/
  /* 初始化显示驱动 */
  tft.init();
  /* 旋转角度 0、1、2、3 对应 0 、90度、180度、270 */
  tft.setRotation(3);
  /* 关闭颜色反转 */
  tft.invertDisplay(0);
}

/**
 * @brief 显示回调函数，通过此回调函数将绘制空间的图形传递给显示驱动程序
 * @param disp 显示驱动程序的描述符
 * @param area 图像需要显示的区域
 * @param color_p 描绘后的图形
 */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors(&color_p->full, w * h, true);
  tft.endWrite();

  /* 反馈显示结果*/
  lv_disp_flush_ready(disp);
}

static void touchpad_read(lv_indev_drv_t *indev_drv, lv_indev_data_t *data)
{
  uint16_t touchX, touchY;

  bool touched = tft.getTouch(&touchX, &touchY, 600);

  if (!touched)
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;

    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;

    Serial.print("Data x");
    Serial.println(touchX);

    Serial.print("Data y");
    Serial.println(touchY);
  }
}
void lvgl_init()
{
  /*------------- 初始化LVGL库 -------------*/
  lv_init();

  /* 初始化显示缓冲区 */

  /*------------- 创建图形绘制缓冲区 -------------*/
  buf1 = (lv_color_t *)heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
  assert(buf1 != NULL);

  buf2 = (lv_color_t *)heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
  assert(buf2 != NULL);

  lv_disp_draw_buf_init(&draw_buf, buf1, buf2, DISP_BUF_SIZE);

  /*------------- 设置LVGL的显示设备 -------------*/
  static lv_disp_drv_t disp_drv;      // 显示驱动程序的描述符
  lv_disp_drv_init(&disp_drv);        // 初始化句柄，确保所有参数都是默认值
  disp_drv.hor_res = MY_DISP_HOR_RES; // 设置显示器的水平分辨率
  disp_drv.ver_res = MY_DISP_VER_RES; // 设置显示器的垂直分辨率
  disp_drv.flush_cb = my_disp_flush;  // 显示驱动的回调函数
  disp_drv.draw_buf = &draw_buf;      // 将缓冲区分配给显示器
  lv_disp_drv_register(&disp_drv);    // 注册驱动

  /*------------- 设置LVGL的输入设备 -------------*/

  /*创建一个输入设备驱动*/
  static lv_indev_t *indev_cor;
  static lv_indev_drv_t indev_drv;        // 输入驱动程序的描述符
  lv_indev_drv_init(&indev_drv);          // 初始化
  indev_drv.type = LV_INDEV_TYPE_POINTER; // 设置设备类型
  indev_drv.read_cb = touchpad_read;      // 输入设备的回调函数
  lv_indev_drv_register(&indev_drv);      // 创建输入设备
}

/**
 * @brief 按钮事件回调函数
 */
static void btn_event_callback(lv_event_t *event)
{
  static uint32_t counter = 1;

  lv_obj_t *btn = lv_event_get_target(event); // 获取事件对象
  if (btn != NULL)
  {
    // lv_label_set_text_fmt(label, "%d", counter); // 设置显示内容
    // lv_obj_align(label, LV_ALIGN_CENTER, 0, -50); // 居中显示后，向上偏移50
    Serial.println(counter);
    counter++;
  }
}

void showLogo()
{
  LV_IMG_DECLARE(main_scream_320x240);
  // int x = (MY_DISP_HOR_RES - tva.header.w) / 2;
  // int y = (MY_DISP_VER_RES - tva.header.h) / 2;
  lv_obj_t *img = lv_img_create(lv_scr_act());
  lv_img_set_src(img, &main_scream_320x240);

  lv_obj_set_pos(img, 0, 0);
}

void touch_test()
{
  uint16_t x, y;

  if (tft.getTouch(&x, &y))
  {
    tft.fillCircle(x, y, 2, TFT_ORANGE);
    // 触摸屏被驱动并且正在被触摸
    Serial.println("Touch screen is working!");
  }
  else
  {
    // 触摸屏没有被驱动或者没有被触摸
    Serial.println("Touch screen is not working...");
  }
}
