#include "lvgl_helper.h"


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
void disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
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

static void touch_pad_read(lv_indev_drv_t *indev_drv, lv_indev_data_t *data)
{
  uint16_t touchX, touchY;

  bool touched = tft.getTouch(&touchX, &touchY, 600);

  Serial.printf("%d",touched);

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
  disp_drv.flush_cb = disp_flush;  // 显示驱动的回调函数
  disp_drv.draw_buf = &draw_buf;      // 将缓冲区分配给显示器
  lv_disp_drv_register(&disp_drv);    // 注册驱动

  /*------------- 设置LVGL的输入设备 -------------*/

  /*创建一个输入设备驱动*/
  static lv_indev_t *indev_cor;
  static lv_indev_drv_t indev_drv;        // 输入驱动程序的描述符
  lv_indev_drv_init(&indev_drv);          // 初始化
  indev_drv.type = LV_INDEV_TYPE_POINTER; // 设置设备类型
  indev_drv.read_cb = touch_pad_read;      // 输入设备的回调函数
  lv_indev_drv_register(&indev_drv);      // 创建输入设备
}
