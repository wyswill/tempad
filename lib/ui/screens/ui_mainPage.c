// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_mainPage_screen_init(void)
{
    ui_mainPage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_mainPage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_mainPage, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mainPage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_mainPage, lv_color_hex(0xD1743B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_mainPage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_mainPage, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image5 = lv_img_create(ui_mainPage);
    lv_img_set_src(ui_Image5, &ui_img_bg_greap_10x10_png);
    lv_obj_set_width(ui_Image5, lv_pct(100));
    lv_obj_set_height(ui_Image5, lv_pct(100));
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container1 = lv_obj_create(ui_mainPage);
    lv_obj_remove_style_all(ui_Container1);
    lv_obj_set_width(ui_Container1, 319);
    lv_obj_set_height(ui_Container1, 50);
    lv_obj_set_x(ui_Container1, -4);
    lv_obj_set_y(ui_Container1, -88);
    lv_obj_set_align(ui_Container1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Container1, lv_color_hex(0xD1743B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Container1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Container1, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Container1, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_logo = lv_img_create(ui_mainPage);
    lv_img_set_src(ui_logo, &ui_img_logo_120x70_png);
    lv_obj_set_width(ui_logo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_logo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_logo, -103);
    lv_obj_set_y(ui_logo, -92);
    lv_obj_set_align(ui_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label2 = lv_label_create(ui_mainPage);
    lv_obj_set_width(ui_Label2, 186);
    lv_obj_set_height(ui_Label2, 41);
    lv_obj_set_x(ui_Label2, 51);
    lv_obj_set_y(ui_Label2, -91);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "PLAY YOUR PART,PRUNE PRODENTLY");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_setting = lv_img_create(ui_mainPage);
    lv_img_set_src(ui_setting, &ui_img_setting_40x60_png);
    lv_obj_set_width(ui_setting, 40);
    lv_obj_set_height(ui_setting, 60);
    lv_obj_set_x(ui_setting, -31);
    lv_obj_set_y(ui_setting, -4);
    lv_obj_set_align(ui_setting, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_setting, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_setting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_timeLine = lv_img_create(ui_mainPage);
    lv_img_set_src(ui_timeLine, &ui_img_timeline_40x60_png);
    lv_obj_set_width(ui_timeLine, 40);
    lv_obj_set_height(ui_timeLine, 60);
    lv_obj_set_x(ui_timeLine, 45);
    lv_obj_set_y(ui_timeLine, -4);
    lv_obj_set_align(ui_timeLine, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_timeLine, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_timeLine, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label3 = lv_label_create(ui_mainPage);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -32);
    lv_obj_set_y(ui_Label3, 43);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Setting");
    lv_obj_add_flag(ui_Label3, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Label3, lv_color_hex(0xD1743B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_mainPage);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, 45);
    lv_obj_set_y(ui_Label4, 43);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "TimeLine");
    lv_obj_add_flag(ui_Label4, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Label4, lv_color_hex(0xD1743B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_logo2 = lv_img_create(ui_mainPage);
    lv_img_set_src(ui_logo2, &ui_img_tva_logo_2_40x40_png);
    lv_obj_set_width(ui_logo2, 40);
    lv_obj_set_height(ui_logo2, 40);
    lv_obj_set_x(ui_logo2, 126);
    lv_obj_set_y(ui_logo2, 88);
    lv_obj_set_align(ui_logo2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_logo2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_logo2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image9 = lv_img_create(ui_mainPage);
    lv_img_set_src(ui_Image9, &ui_img_mis_wite_60x60_png);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image9, -115);
    lv_obj_set_y(ui_Image9, 18);
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_setting, ui_event_setting, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_timeLine, ui_event_timeLine, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Label3, ui_event_Label3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Label4, ui_event_Label4, LV_EVENT_ALL, NULL);

}
