// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"


// COMPONENT loadingBar

lv_obj_t * ui_loadingBar_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_loadingBar;
    cui_loadingBar = lv_bar_create(comp_parent);
    lv_bar_set_value(cui_loadingBar, 10, LV_ANIM_OFF);
    lv_bar_set_start_value(cui_loadingBar, 0, LV_ANIM_OFF);
    lv_obj_set_width(cui_loadingBar, 265);
    lv_obj_set_height(cui_loadingBar, 31);
    lv_obj_set_x(cui_loadingBar, -4);
    lv_obj_set_y(cui_loadingBar, 81);
    lv_obj_set_align(cui_loadingBar, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(cui_loadingBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_loadingBar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_loadingBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cui_loadingBar, lv_color_hex(0xD1743B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(cui_loadingBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_loadingBar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_loadingBar, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(cui_loadingBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_loadingBar, lv_color_hex(0xD1743B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_loadingBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(cui_loadingBar, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_LOADINGBAR_NUM);
    children[UI_COMP_LOADINGBAR_LOADINGBAR] = cui_loadingBar;
    lv_obj_add_event_cb(cui_loadingBar, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_loadingBar, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_loadingBar_create_hook(cui_loadingBar);
    return cui_loadingBar;
}
