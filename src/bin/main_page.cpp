#include "lvgl_helper.h"

Main_page::Main_page()
{
}

void Main_page::set_bg()
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

  // 将样式应用到对象
  lv_obj_add_style(bg_obj, &bg_style, LV_PART_MAIN);

  // 设置对象的大小
  lv_obj_set_size(bg_obj, MY_DISP_HOR_RES, MY_DISP_VER_RES);

  // 设置对象的位置
  lv_obj_align(bg_obj, LV_ALIGN_CENTER, 0, 0);

  // 画格子线
  // 宽 33 格子 高 16 格子

  // lv_obj_t *gread_obj = lv_obj_create(lv_scr_act());
  // // 初始化一个样式
  // static lv_style_t gread_style;
  // lv_style_init(&gread_style);
  // // 设置样式的圆角半径为0
  // lv_style_set_radius(&gread_style, 0);
  // // 设置样式的边框颜色和宽度
  // lv_style_set_border_color(&gread_style, lv_color_white()); // 边框颜色为白色
  // lv_style_set_border_width(&gread_style, 1);
  // lv_obj_add_style(gread_obj, &gread_style, LV_PART_ANY);
  // // 设置对象的大小
  // lv_obj_set_size(bg_obj, MY_DISP_HOR_RES - 8, MY_DISP_VER_RES - 8);
  // // 设置对象的位置
  // lv_obj_align(bg_obj, LV_ALIGN_CENTER, 0, 0);
}
