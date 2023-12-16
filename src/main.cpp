#include "Arduino.h"
#include "lvgl_helper.h"
#include "../lib/lvgl/src/demos/lv_demos.h"
void setup(void)
{
  Serial.begin(115200);
  Serial.println("mian.cpp-> 程序初始化......");

  /* 初始化显示驱动 */
  disp_drv_init();

  lvgl_init();
  
  lv_demo_widgets();
}

void loop()
{
  lv_timer_handler();
  // touch_test();
  delay(5);
}
