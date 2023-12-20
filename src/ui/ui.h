// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
// SCREEN: ui_loading
void ui_loading_screen_init(void);
extern lv_obj_t * ui_loading;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_loadingBar;
// SCREEN: ui_mainPage
void ui_mainPage_screen_init(void);
extern lv_obj_t * ui_mainPage;
extern lv_obj_t * ui_Container1;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_setting;
extern lv_obj_t * ui_timeLine;
extern lv_obj_t * ui_album;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label5;
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_logo_100x50_png);    // assets\logo_100x50.png
LV_IMG_DECLARE(ui_img_setting_40x60_png);    // assets\setting_40x60.png
LV_IMG_DECLARE(ui_img_timeline_40x60_png);    // assets\timeline_40x60.png
LV_IMG_DECLARE(ui_img_album_40x60_png);    // assets\album_40x60.png
LV_IMG_DECLARE(ui_img_tva_logo_2_png);    // assets\TVA_LOGO_2.png



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
