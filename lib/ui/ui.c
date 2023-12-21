// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void moveTimeLogo_Animation(lv_obj_t * TargetObject, int delay);


// SCREEN: ui_loading
void ui_loading_screen_init(void);
void ui_event_loading(lv_event_t * e);
lv_obj_t * ui_loading;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_loadingBar;
lv_obj_t * ui_Image2;


// SCREEN: ui_mainPage
void ui_mainPage_screen_init(void);
lv_obj_t * ui_mainPage;
lv_obj_t * ui_Image5;
lv_obj_t * ui_Container1;
lv_obj_t * ui_logo;
lv_obj_t * ui_Label2;
void ui_event_setting(lv_event_t * e);
lv_obj_t * ui_setting;
void ui_event_timeLine(lv_event_t * e);
lv_obj_t * ui_timeLine;
void ui_event_album(lv_event_t * e);
lv_obj_t * ui_album;
void ui_event_Label3(lv_event_t * e);
lv_obj_t * ui_Label3;
void ui_event_Label4(lv_event_t * e);
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label5;
lv_obj_t * ui_logo2;
lv_obj_t * ui_Image9;


// SCREEN: ui_settingPage
void ui_settingPage_screen_init(void);
void ui_event_settingPage(lv_event_t * e);
lv_obj_t * ui_settingPage;
lv_obj_t * ui_Image6;
lv_obj_t * ui_Image3;
lv_obj_t * ui_wifiName;
lv_obj_t * ui_wifiPass;
lv_obj_t * ui_city;
lv_obj_t * ui_Roller1;
lv_obj_t * ui_wifiNameIn;
lv_obj_t * ui_wifiPassIn;


// SCREEN: ui_albumPage
void ui_albumPage_screen_init(void);
void ui_event_albumPage(lv_event_t * e);
lv_obj_t * ui_albumPage;
lv_obj_t * ui_bg;
lv_obj_t * ui_loadingBar1;
lv_obj_t * ui_bg1;


// SCREEN: ui_timeLinePage
void ui_timeLinePage_screen_init(void);
void ui_event_timeLinePage(lv_event_t * e);
lv_obj_t * ui_timeLinePage;
lv_obj_t * ui_Image8;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_album_40x[1] = {&ui_img_album_40x60_png};
const lv_img_dsc_t * ui_imgset_bg_greap_x[1] = {&ui_img_bg_greap_10x10_png};
const lv_img_dsc_t * ui_imgset_logo_100x[1] = {&ui_img_logo_100x50_png};
const lv_img_dsc_t * ui_imgset_logo_120x[1] = {&ui_img_logo_120x70_png};
const lv_img_dsc_t * ui_imgset_miss_loading_x[1] = {&ui_img_miss_loading_40x40_png};
const lv_img_dsc_t * ui_imgset_mis_wite_x[1] = {&ui_img_mis_wite_60x60_png};
const lv_img_dsc_t * ui_imgset_setting_40x[1] = {&ui_img_setting_40x60_png};
const lv_img_dsc_t * ui_imgset_timeline_40x[1] = {&ui_img_timeline_40x60_png};
const lv_img_dsc_t * ui_imgset_tva_logo_[1] = {&ui_img_tva_logo_2_png};
const lv_img_dsc_t * ui_imgset_tva_logo_2_x[1] = {&ui_img_tva_logo_2_40x40_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void moveTimeLogo_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 200);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_loading(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        _ui_bar_increment(ui_loadingBar, 100, LV_ANIM_ON);
        moveTimeLogo_Animation(ui_Image2, 0);
        _ui_screen_change(&ui_mainPage, LV_SCR_LOAD_ANIM_FADE_ON, 100, 550, &ui_mainPage_screen_init);
    }
}
void ui_event_setting(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_settingPage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_settingPage_screen_init);
    }
}
void ui_event_timeLine(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_timeLinePage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_timeLinePage_screen_init);
    }
}
void ui_event_album(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_albumPage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_albumPage_screen_init);
    }
}
void ui_event_Label3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_settingPage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_settingPage_screen_init);
    }
}
void ui_event_Label4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_settingPage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_settingPage_screen_init);
    }
}
void ui_event_settingPage(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        _ui_screen_change(&ui_mainPage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_mainPage_screen_init);
    }
}
void ui_event_albumPage(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        _ui_screen_change(&ui_mainPage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_mainPage_screen_init);
    }
}
void ui_event_timeLinePage(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        _ui_screen_change(&ui_mainPage, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_mainPage_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_loading_screen_init();
    ui_mainPage_screen_init();
    ui_settingPage_screen_init();
    ui_albumPage_screen_init();
    ui_timeLinePage_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_loading);
}
