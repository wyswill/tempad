// other.h
#include <lvgl.h>
#include "SPI.h"
#include "TFT_eSPI.h"
#include "tempad.h"
// 是否启动 lvgl demo
// #include "../lib/lvgl/src/demos/lv_demos.h"


#ifndef lvgl_helper
#define lvgl_helper

void disp_drv_init(); // 函数声明
void lvgl_init();     // 函数声明
#endif