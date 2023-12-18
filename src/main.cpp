#include "Arduino.h"
#include "lvgl_helper.h"
void setup(void)
{
  Serial.begin(115200);
  Serial.println("mian.cpp-> 程序初始化......");

  /* 初始化显示驱动 */
  disp_drv_init();
  // 初始化lvgl
  lvgl_init();

  Main_page mp;
  mp.set_bg();
}

void loop()
{
  lv_timer_handler();
  delay(5);
}
