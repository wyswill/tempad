#include <tempad.h>
#include <iostream>

#define CANVAS_WIDTH 290
#define CANVAS_HEIGHT 210

Tempad::Tempad() {}
Tempad::~Tempad() {}

void Tempad::loading_page()
{
    // 创建一个对象
    lv_obj_t *bg_obj = lv_obj_create(lv_scr_act());
    // 初始化一个样式
    static lv_style_t bg_style;
    lv_style_init(&bg_style);

    // 设置样式的背景颜色为黑色
    lv_style_set_bg_color(&bg_style, lv_color_black());

    // 设置样式的边框颜色和宽度
    lv_style_set_border_color(&bg_style, lv_color_hex(TVA_ORANGE)); // 边框颜色为橘色
    lv_style_set_border_width(&bg_style, 4);                        // 边框宽度为4
    // 设置样式的圆角半径为0
    lv_style_set_radius(&bg_style, 0);

    lv_style_set_pad_left(&bg_style, 10);
    lv_style_set_pad_right(&bg_style, 10);
    lv_style_set_pad_top(&bg_style, 10);
    lv_style_set_pad_bottom(&bg_style, 10);
    // lv_style_set_pad_inner(&bg_style, 0)

    // 将样式应用到对象
    lv_obj_add_style(bg_obj, &bg_style, LV_PART_MAIN);

    // 设置对象的大小
    lv_obj_set_size(bg_obj, MY_DISP_HOR_RES, MY_DISP_VER_RES);

    // 设置对象的位置
    lv_obj_align(bg_obj, LV_ALIGN_CENTER, 0, 0);

    this->draw_grid(bg_obj);
}

void Tempad::draw_grid(lv_obj_t *bg_obj)
{
    // /*Create a buffer for the canvas*/
    // static uint8_t cbuf[LV_CANVAS_BUF_SIZE(CANVAS_WIDTH, CANVAS_HEIGHT, 32, LV_DRAW_BUF_STRIDE_ALIGN)];

    // /*Create a canvas and initialize its palette*/
    // lv_obj_t *canvas = lv_canvas_create(bg_obj);
    // // 设置buf
    // lv_canvas_set_buffer(canvas, cbuf, CANVAS_WIDTH, CANVAS_HEIGHT, LV_COLOR_FORMAT_ARGB8888);
    // // 设置bg-color
    // lv_canvas_fill_bg(canvas, lv_color_hex3(0x000), LV_OPA_COVER);
    // // 设置位置
    // lv_obj_center(canvas);

    // lv_layer_t layer;
    // lv_canvas_init_layer(canvas, &layer);

    // lv_obj_t *line;
    // lv_color_t line_color = lv_color_white();
    // for (int i = 0; i < 27; i++)
    // {

    //     lv_draw_line_dsc_t line_hov;
    //     lv_draw_line_dsc_init(&line_hov);

    //     line_hov.p1.x = 0;
    //     line_hov.p1.y = i * 10;

    //     line_hov.p2.x = 290;
    //     line_hov.p2.y = i * 10;

    //     line_hov.color = line_color;

    //     lv_draw_line(&layer, &line_hov);
    // }

    // for (int i = 0; i < 29; i++)
    // {
    //     lv_draw_line_dsc_t line_ver;
    //     lv_draw_line_dsc_init(&line_ver);

    //     line_ver.p1.x = i * 10;
    //     line_ver.p1.y = 0;

    //     line_ver.p2.x = i * 10;
    //     line_ver.p2.y = 290;

    //     line_ver.color = line_color;

    //     lv_draw_line(&layer, &line_ver);
    // }

    // lv_draw_line_dsc_t line_ver_end;
    // lv_draw_line_dsc_init(&line_ver_end);

    // int end_x = CANVAS_WIDTH - 1;
    // line_ver_end.p1.x = end_x;
    // line_ver_end.p1.y = 0;
    // line_ver_end.p2.x = end_x;
    // line_ver_end.p2.y = 290;
    // line_ver_end.color = line_color;
    // lv_draw_line(&layer, &line_ver_end);

    // int end_y = CANVAS_HEIGHT - 1;
    // lv_draw_line_dsc_t line_hov_end;
    // lv_draw_line_dsc_init(&line_hov_end);
    // line_hov_end.p1.x = 0;
    // line_hov_end.p1.y = end_y;
    // line_hov_end.p2.x = end_x;
    // line_hov_end.p2.y = end_y;
    // line_hov_end.color = line_color;
    // lv_draw_line(&layer, &line_hov_end);

    // lv_canvas_finish_layer(canvas, &layer);
}
