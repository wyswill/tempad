﻿#include <lvgl.h>
/*------------COLORS---------------*/
// tva 主橙色 209 116	59
#define TVA_ORANGE 0xd1743b // tva 主橙色
#define MY_DISP_HOR_RES 320
#define MY_DISP_VER_RES 240

class Tempad
{
private:
    void draw_grid( lv_obj_t *bg_obj);

public:
    Tempad(/* args */);
    ~Tempad();
    void loading_page();
};
