// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_loading_screen_init(void)
{
    ui_loading = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_loading, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_loading, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_loading, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_loading, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_loading, lv_color_hex(0xD5570B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_loading, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_loading, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_loading);
    lv_img_set_src(ui_Image4, &ui_img_bg_greap_10x10_png);
    lv_obj_set_width(ui_Image4, lv_pct(100));
    lv_obj_set_height(ui_Image4, lv_pct(100));
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image1 = lv_img_create(ui_loading);
    lv_img_set_src(ui_Image1, &ui_img_logo_120x70_png);
    lv_obj_set_width(ui_Image1, 120);
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image1, -83);
    lv_obj_set_y(ui_Image1, -76);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_loading);
    lv_obj_set_width(ui_Label1, 173);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_x(ui_Label1, -13);
    lv_obj_set_y(ui_Label1, -18);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_Label1, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_Label1, "Connecting to the TVA");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xD5570B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &ui_font_scFont, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_loadingBar = lv_bar_create(ui_loading);
    lv_obj_set_width(ui_loadingBar, 265);
    lv_obj_set_height(ui_loadingBar, 31);
    lv_obj_set_x(ui_loadingBar, -4);
    lv_obj_set_y(ui_loadingBar, 81);
    lv_obj_set_align(ui_loadingBar, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_loadingBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_loadingBar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_loadingBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_loadingBar, lv_color_hex(0xD5570B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_loadingBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_loadingBar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_anim_time(ui_loadingBar, 500, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_loadingBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_loadingBar, lv_color_hex(0xD1743B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_loadingBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_loadingBar, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_loading);
    lv_img_set_src(ui_Image2, &ui_img_miss_loading_40x40_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image2, -113);
    lv_obj_set_y(ui_Image2, 33);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_loading, ui_event_loading, LV_EVENT_ALL, NULL);

}
