// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"


// COMPONENT bg

lv_obj_t * ui_bg_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_bg;
    cui_bg = lv_img_create(comp_parent);
    lv_img_set_src(cui_bg, &ui_img_bg_greap_10x10_png);
    lv_obj_set_width(cui_bg, lv_pct(100));
    lv_obj_set_height(cui_bg, lv_pct(100));
    lv_obj_set_x(cui_bg, -1);
    lv_obj_set_y(cui_bg, -1);
    lv_obj_set_align(cui_bg, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_bg, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_bg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BG_NUM);
    children[UI_COMP_BG_BG] = cui_bg;
    lv_obj_add_event_cb(cui_bg, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_bg, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_bg_create_hook(cui_bg);
    return cui_bg;
}
