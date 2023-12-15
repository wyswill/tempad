#include "Arduino.h"
#include "lvgl_helper.h"
void setup(void)
{
  Serial.begin(115200);
  Serial.println("mian.cpp-> 程序初始化......");

  /* 初始化显示驱动 */
  disp_drv_init();

  /* 初始化触摸驱动 */
  // touch_drv_init();

  /* lvgl 初始化 */
  lvgl_init();

  showLogo();
  /* 加载标签 */
  // lvgl_lable_test();
  /* 加载按钮 */
  // lvgl_button_test();
}

void loop()
{
  lv_timer_handler();
  delay(5);
}
