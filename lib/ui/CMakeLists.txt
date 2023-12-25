SET(SOURCES components/ui_comp_bg.c
    components/ui_comp_loadingbar.c
    components/ui_comp.c
    screens/ui_logoPage.c
    screens/ui_mainPage.c
    screens/ui_settingPage.c
    screens/ui_loading.c
    screens/ui_timeLinePage.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_logo_100x50_png.c
    images/ui_img_bg_greap_10x10_png.c
    images/ui_img_logo_120x70_png.c
    images/ui_img_tva_logo_2_40x40_png.c
    images/ui_img_mis_wite_60x60_png.c
    images/ui_img_sqre_60x80_png.c
    images/ui_img_miss_loading_40x40_png.c
    images/ui_img_album_40x60_png.c
    images/ui_img_tva_logo_2_png.c
    fonts/ui_font_fontSize8.c
    fonts/ui_font_scFont.c)

add_library(ui ${SOURCES})
