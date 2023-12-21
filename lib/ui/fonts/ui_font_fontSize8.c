/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --font D:\project\PlatformIO\Projects\testTFT\uiProject\assets\Source Code Pro for Powerline.otf -o D:\project\PlatformIO\Projects\testTFT\uiProject\assets\ui_font_fontSize8.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONTSIZE8
#define UI_FONT_FONTSIZE8 1
#endif

#if UI_FONT_FONTSIZE8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf8,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x3b, 0x78,

    /* U+0024 "$" */
    0x5e, 0x23, 0xd0,

    /* U+0025 "%" */
    0xce, 0x85, 0x53, 0x80,

    /* U+0026 "&" */
    0xea, 0x4b, 0xf0,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x2a, 0x49, 0x10,

    /* U+0029 ")" */
    0x88, 0x92, 0x50,

    /* U+002A "*" */
    0x23, 0x94, 0x0,

    /* U+002B "+" */
    0x4b, 0xa0,

    /* U+002C "," */
    0x58,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x29, 0x29, 0x20,

    /* U+0030 "0" */
    0x69, 0xb9, 0x60,

    /* U+0031 "1" */
    0xc9, 0x2e,

    /* U+0032 "2" */
    0x71, 0x12, 0x70,

    /* U+0033 "3" */
    0x71, 0x61, 0xf0,

    /* U+0034 "4" */
    0x13, 0x95, 0xf1, 0x0,

    /* U+0035 "5" */
    0xfe, 0x11, 0xe0,

    /* U+0036 "6" */
    0x78, 0xad, 0x70,

    /* U+0037 "7" */
    0xe2, 0x44, 0x40,

    /* U+0038 "8" */
    0xf9, 0x69, 0xf0,

    /* U+0039 "9" */
    0xe9, 0x71, 0xe0,

    /* U+003A ":" */
    0x90,

    /* U+003B ";" */
    0x98,

    /* U+003C "<" */
    0x2a, 0x22,

    /* U+003D "=" */
    0xfc,

    /* U+003E ">" */
    0x88, 0xa8,

    /* U+003F "?" */
    0xe5, 0x4,

    /* U+0040 "@" */
    0x79, 0xbd, 0xf8, 0x60,

    /* U+0041 "A" */
    0x23, 0x14, 0xe9, 0x0,

    /* U+0042 "B" */
    0xea, 0xcb, 0xf0,

    /* U+0043 "C" */
    0x78, 0x88, 0x70,

    /* U+0044 "D" */
    0xe9, 0x99, 0xe0,

    /* U+0045 "E" */
    0xf8, 0xe8, 0xf0,

    /* U+0046 "F" */
    0xf8, 0xe8, 0x80,

    /* U+0047 "G" */
    0x78, 0xb9, 0x70,

    /* U+0048 "H" */
    0x99, 0xf9, 0x90,

    /* U+0049 "I" */
    0xe9, 0x2e,

    /* U+004A "J" */
    0x71, 0x11, 0x70,

    /* U+004B "K" */
    0x9a, 0xea, 0x90,

    /* U+004C "L" */
    0x88, 0x88, 0xf0,

    /* U+004D "M" */
    0x9f, 0xf9, 0x90,

    /* U+004E "N" */
    0x9d, 0xdb, 0x90,

    /* U+004F "O" */
    0x69, 0x99, 0x60,

    /* U+0050 "P" */
    0xf9, 0xe8, 0x80,

    /* U+0051 "Q" */
    0x69, 0x99, 0x96, 0x10,

    /* U+0052 "R" */
    0xf9, 0xea, 0x90,

    /* U+0053 "S" */
    0xf8, 0x61, 0xf0,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x0,

    /* U+0055 "U" */
    0x99, 0x99, 0x60,

    /* U+0056 "V" */
    0x95, 0x56, 0x20,

    /* U+0057 "W" */
    0x8d, 0xbc, 0xe5, 0x0,

    /* U+0058 "X" */
    0x56, 0x26, 0x90,

    /* U+0059 "Y" */
    0x9a, 0x98, 0x42, 0x0,

    /* U+005A "Z" */
    0xf2, 0x44, 0xf0,

    /* U+005B "[" */
    0xd2, 0x49, 0x38,

    /* U+005C "\\" */
    0x92, 0x24, 0x88,

    /* U+005D "]" */
    0x64, 0x92, 0x78,

    /* U+005E "^" */
    0x5a, 0x80,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x80,

    /* U+0061 "a" */
    0xf1, 0xff,

    /* U+0062 "b" */
    0x88, 0xf9, 0x9e,

    /* U+0063 "c" */
    0x78, 0x87,

    /* U+0064 "d" */
    0x11, 0x79, 0x9f,

    /* U+0065 "e" */
    0x7f, 0x87,

    /* U+0066 "f" */
    0x74, 0xf4, 0x44,

    /* U+0067 "g" */
    0xfa, 0x4e, 0x9e,

    /* U+0068 "h" */
    0x88, 0xf9, 0x99,

    /* U+0069 "i" */
    0x23, 0x92, 0x40,

    /* U+006A "j" */
    0x23, 0x92, 0x4f,

    /* U+006B "k" */
    0x88, 0xac, 0xa9,

    /* U+006C "l" */
    0xc4, 0x44, 0x47,

    /* U+006D "m" */
    0xff, 0xf0,

    /* U+006E "n" */
    0xf9, 0x99,

    /* U+006F "o" */
    0x69, 0x96,

    /* U+0070 "p" */
    0xf9, 0x9e, 0x88,

    /* U+0071 "q" */
    0x79, 0x9f, 0x11,

    /* U+0072 "r" */
    0xf2, 0x40,

    /* U+0073 "s" */
    0xe8, 0x6e,

    /* U+0074 "t" */
    0x4f, 0x44, 0x70,

    /* U+0075 "u" */
    0x99, 0x9f,

    /* U+0076 "v" */
    0x95, 0x62,

    /* U+0077 "w" */
    0xad, 0xbc, 0xa0,

    /* U+0078 "x" */
    0xa9, 0x50,

    /* U+0079 "y" */
    0x95, 0x66, 0x24,

    /* U+007A "z" */
    0xe2, 0x4f,

    /* U+007B "{" */
    0x49, 0x44, 0x98,

    /* U+007C "|" */
    0xff,

    /* U+007D "}" */
    0x49, 0x14, 0xa0,

    /* U+007E "~" */
    0x8c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 77, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 77, .box_w = 1, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 4, .adv_w = 77, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 9, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 77, .box_w = 1, .box_h = 3, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 17, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 20, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 77, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 77, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 28, .adv_w = 77, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 29, .adv_w = 77, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 30, .adv_w = 77, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 34, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 77, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 77, .box_w = 1, .box_h = 4, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 77, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 66, .adv_w = 77, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 77, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 69, .adv_w = 77, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 77, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 77, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 77, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 77, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 77, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 129, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 162, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 165, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 168, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 170, .adv_w = 77, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 171, .adv_w = 77, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 172, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 190, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 77, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 77, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 199, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 77, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 214, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 217, .adv_w = 77, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 77, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 77, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 77, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 236, .adv_w = 77, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 241, .adv_w = 77, .box_w = 1, .box_h = 8, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 242, .adv_w = 77, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 245, .adv_w = 77, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_fontSize8 = {
#else
lv_font_t ui_font_fontSize8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONTSIZE8*/

