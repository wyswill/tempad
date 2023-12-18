// other.h
#include <lvgl.h>
#include "SPI.h"
#include "TFT_eSPI.h"

// 是否启动 lvgl demo
// #include "../lib/lvgl/src/demos/lv_demos.h"

/*------------ LVGL ------------*/
#define MY_DISP_HOR_RES 320 // 显示屏的宽像素
#define MY_DISP_VER_RES 240 // 显示屏的高像素

/*------------COLORS---------------*/
// tva 主橙色 209	116	59
#define TVA_ORANGE 0xd1743b // tva 主橙色

#ifndef lvgl_helper
#define lvgl_helper

void disp_drv_init(); // 函数声明
void lvgl_init();     // 函数声明
#endif

class Main_page
{
private:
  /* data */
public:
  Main_page();
  void set_bg();
};