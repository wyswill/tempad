// other.h
#include <lvgl.h>
#include "SPI.h"
#include "TFT_eSPI.h"

// 是否启动 lvgl demo
// #include "../lib/lvgl/src/demos/lv_demos.h"

/*------------ LVGL ------------*/
#define MY_DISP_HOR_RES 320 // 显示屏的宽像素
#define MY_DISP_VER_RES 240 // 显示屏的高像素


#ifndef lvgl_helper
#define lvgl_helper

void disp_drv_init(); // 函数声明
void lvgl_init();     // 函数声明
#endif