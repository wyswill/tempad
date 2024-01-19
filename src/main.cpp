#include "Arduino.h"
#include "lvgl_helper.h"
// #include "ui.h"

void lv_example_gif(void)
{
  LV_IMG_DECLARE(out_img);
  lv_obj_t *img;

  img = lv_gif_create(lv_scr_act());
  lv_gif_set_src(img, &out_img);
  lv_obj_set_pos(img, 0, 0);
}

void setup(void)
{
  Serial.begin(115200);
  Serial.println("mian.cpp-> 程序初始化......");

  /* 初始化显示驱动 */
  disp_drv_init();
  // 初始化lvgl
  lvgl_init();
  lv_example_gif();
  // ui_init();
}

void loop()
{
  lv_timer_handler();
  delay(5);
}
