#include "../../lvgl.h"

/*******************************************************************************
 * Size: 6 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_MONTSERRAT_6
#define LV_FONT_MONTSERRAT_6 1
#endif

#if LV_FONT_MONTSERRAT_6

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x94, 0x44,

    /* U+22 "\"" */
    0x50,

    /* U+23 "#" */
    0x22, 0x1e, 0x87, 0xe0, 0x60,

    /* U+24 "$" */
    0x78, 0x70, 0x19, 0x78, 0x0,

    /* U+25 "%" */
    0x62, 0x16, 0x1, 0x60, 0x89,

    /* U+26 "&" */
    0x28, 0xe, 0x5, 0x91, 0xa8, 0x0, 0x0,

    /* U+27 "'" */
    0x40,

    /* U+28 "(" */
    0x28, 0x88, 0x20,

    /* U+29 ")" */
    0x82, 0x22, 0x80,

    /* U+2A "*" */
    0x20, 0x40,

    /* U+2B "+" */
    0x10, 0x78, 0x20,

    /* U+2C "," */
    0x4, 0x0,

    /* U+2D "-" */
    0x60,

    /* U+2E "." */
    0x40,

    /* U+2F "/" */
    0x4, 0x8, 0x10, 0x10, 0x80,

    /* U+30 "0" */
    0x29, 0x82, 0x82, 0x29,

    /* U+31 "1" */
    0x62, 0x22,

    /* U+32 "2" */
    0x68, 0x8, 0x24, 0xb8,

    /* U+33 "3" */
    0x6c, 0x28, 0x8, 0x68,

    /* U+34 "4" */
    0x20, 0x50, 0xac, 0x8,

    /* U+35 "5" */
    0xa8, 0x68, 0x8, 0x68,

    /* U+36 "6" */
    0x28, 0xa8, 0x85, 0x28,

    /* U+37 "7" */
    0xac, 0x8, 0x20, 0x20,

    /* U+38 "8" */
    0x68, 0x6c, 0x85, 0x68,

    /* U+39 "9" */
    0x68, 0x89, 0x29, 0x28,

    /* U+3A ":" */
    0x44,

    /* U+3B ";" */
    0x40, 0x40,

    /* U+3C "<" */
    0x4, 0xa0, 0x28, 0x0,

    /* U+3D "=" */
    0x68, 0x68,

    /* U+3E ">" */
    0x50, 0x18, 0x24, 0x0,

    /* U+3F "?" */
    0x64, 0x62, 0x8,

    /* U+40 "@" */
    0x5, 0x1, 0xb4, 0x62, 0x1, 0xa4, 0x0, 0x0,

    /* U+41 "A" */
    0x1c, 0x9, 0x46, 0xa2, 0x4,

    /* U+42 "B" */
    0x69, 0x52, 0x69, 0x6a,

    /* U+43 "C" */
    0x2a, 0x20, 0x8, 0x0, 0xa8,

    /* U+44 "D" */
    0x6a, 0x14, 0x55, 0x15, 0xa8,

    /* U+45 "E" */
    0x69, 0x50, 0x68, 0x69,

    /* U+46 "F" */
    0x68, 0x50, 0x68, 0x50,

    /* U+47 "G" */
    0x2a, 0x20, 0x8, 0x10, 0xa8,

    /* U+48 "H" */
    0x52, 0x14, 0x86, 0xb1, 0x48,

    /* U+49 "I" */
    0x55, 0x55,

    /* U+4A "J" */
    0x28, 0x20, 0x99,

    /* U+4B "K" */
    0x56, 0x1a, 0x6, 0x81, 0x48,

    /* U+4C "L" */
    0x50, 0x50, 0x50, 0x68,

    /* U+4D "M" */
    0x70, 0xd6, 0x69, 0x5e, 0x55, 0x45,

    /* U+4E "N" */
    0x61, 0x5a, 0x55, 0xa5, 0x49,

    /* U+4F "O" */
    0x2a, 0x20, 0x28, 0x8, 0xa8,

    /* U+50 "P" */
    0x69, 0x53, 0x69, 0x50,

    /* U+51 "Q" */
    0x2a, 0x8, 0x8, 0x80, 0x82, 0xa0, 0x2, 0x80,

    /* U+52 "R" */
    0x6a, 0x14, 0x86, 0xd1, 0x48,

    /* U+53 "S" */
    0x68, 0x60, 0x9, 0x68,

    /* U+54 "T" */
    0x79, 0x20, 0x20, 0x20,

    /* U+55 "U" */
    0x42, 0x10, 0x85, 0x20, 0xa8,

    /* U+56 "V" */
    0x83, 0x15, 0x83, 0x80, 0xa0,

    /* U+57 "W" */
    0x86, 0x21, 0x68, 0x83, 0x99, 0x9, 0x30,

    /* U+58 "X" */
    0x56, 0x2c, 0x2c, 0x96,

    /* U+59 "Y" */
    0x21, 0x42, 0x80, 0x90, 0x10,

    /* U+5A "Z" */
    0x6e, 0x8, 0x20, 0xb9,

    /* U+5B "[" */
    0x54, 0x44, 0x50,

    /* U+5C "\\" */
    0x80, 0x81, 0x2,

    /* U+5D "]" */
    0x62, 0x22, 0x50,

    /* U+5E "^" */
    0x60,

    /* U+5F "_" */
    0x15,

    /* U+60 "`" */
    0x10,

    /* U+61 "a" */
    0x28, 0x5c, 0x9c,

    /* U+62 "b" */
    0x80, 0xa9, 0x82, 0xa9,

    /* U+63 "c" */
    0x68, 0x80, 0x68,

    /* U+64 "d" */
    0x2, 0x6a, 0x82, 0x6a,

    /* U+65 "e" */
    0x68, 0xa9, 0x68,

    /* U+66 "f" */
    0x22, 0x85, 0x14,

    /* U+67 "g" */
    0x69, 0x85, 0x29, 0x28,

    /* U+68 "h" */
    0x80, 0xa8, 0x85, 0x85,

    /* U+69 "i" */
    0x48, 0x88,

    /* U+6A "j" */
    0x10, 0x82, 0x8, 0x60,

    /* U+6B "k" */
    0x80, 0x98, 0xb4, 0x88,

    /* U+6C "l" */
    0x88, 0x88,

    /* U+6D "m" */
    0xaa, 0x98, 0x52, 0x85, 0x20,

    /* U+6E "n" */
    0xa8, 0x85, 0x85,

    /* U+6F "o" */
    0x68, 0x82, 0x68,

    /* U+70 "p" */
    0xa9, 0x82, 0xa9, 0x80,

    /* U+71 "q" */
    0x6a, 0x82, 0x6a, 0x2,

    /* U+72 "r" */
    0xa2, 0x8, 0x0,

    /* U+73 "s" */
    0x64, 0x96, 0x80,

    /* U+74 "t" */
    0x52, 0x85, 0x8,

    /* U+75 "u" */
    0x85, 0x85, 0x69,

    /* U+76 "v" */
    0x88, 0x58, 0x34,

    /* U+77 "w" */
    0x8d, 0x85, 0xa8, 0x32, 0x40,

    /* U+78 "x" */
    0x58, 0x34, 0x98,

    /* U+79 "y" */
    0x88, 0x68, 0x34, 0x60,

    /* U+7A "z" */
    0x6c, 0x8a, 0x80,

    /* U+7B "{" */
    0x15, 0x85, 0x10,

    /* U+7C "|" */
    0x4, 0x44, 0x44,

    /* U+7D "}" */
    0x45, 0x25, 0x40,

    /* U+7E "~" */
    0x64
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 26, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 28, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 59, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 13, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 67, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 25, .adv_w = 22, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 26, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 29, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 32, .adv_w = 41, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 34, .adv_w = 55, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 37, .adv_w = 27, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 39, .adv_w = 46, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 40, .adv_w = 27, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 46, .adv_w = 66, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 37, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 55, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 55, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 61, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 59, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 28, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 28, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 87, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 60, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 93, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 87, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 108, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 63, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 73, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 30, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 53, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 68, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 94, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 81, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 66, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 81, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 187, .adv_w = 70, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 74, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 67, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 101, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 60, .box_w = 5, .box_h = 4, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 34, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 233, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 34, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 239, .adv_w = 38, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 240, .adv_w = 69, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 241, .adv_w = 80, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 242, .adv_w = 56, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 55, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 59, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 37, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 63, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 266, .adv_w = 62, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 26, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 26, .box_w = 3, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 276, .adv_w = 56, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 26, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 97, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 62, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 63, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 297, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 301, .adv_w = 38, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 40, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 62, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 55, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 88, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 54, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 55, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 328, .adv_w = 52, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 334, .adv_w = 25, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 337, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 340, .adv_w = 54, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 1}
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

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    7, 8,
    7, 34,
    7, 53,
    7, 55,
    7, 56,
    7, 58,
    8, 7,
    8, 15,
    8, 16,
    8, 21,
    8, 27,
    8, 34,
    8, 43,
    8, 80,
    9, 9,
    9, 17,
    9, 21,
    9, 23,
    9, 25,
    9, 26,
    9, 48,
    9, 52,
    9, 66,
    9, 71,
    9, 75,
    9, 79,
    9, 80,
    9, 84,
    9, 85,
    9, 86,
    9, 87,
    9, 88,
    9, 92,
    10, 10,
    11, 34,
    11, 43,
    11, 80,
    11, 87,
    11, 90,
    12, 20,
    14, 18,
    14, 19,
    14, 20,
    14, 24,
    14, 34,
    14, 43,
    14, 52,
    14, 53,
    14, 55,
    14, 56,
    14, 57,
    14, 58,
    14, 59,
    14, 71,
    14, 85,
    14, 89,
    14, 91,
    15, 8,
    15, 17,
    15, 18,
    15, 23,
    15, 24,
    15, 48,
    15, 53,
    15, 54,
    15, 55,
    15, 56,
    15, 58,
    15, 71,
    15, 85,
    15, 87,
    15, 88,
    15, 90,
    16, 16,
    16, 17,
    16, 21,
    16, 23,
    16, 25,
    16, 26,
    16, 34,
    16, 43,
    16, 48,
    16, 52,
    16, 66,
    16, 71,
    16, 79,
    16, 80,
    16, 84,
    16, 86,
    16, 87,
    16, 88,
    16, 89,
    16, 91,
    17, 10,
    17, 15,
    17, 16,
    17, 34,
    17, 61,
    17, 62,
    19, 14,
    20, 16,
    21, 8,
    21, 10,
    21, 18,
    21, 24,
    21, 53,
    21, 55,
    21, 58,
    21, 61,
    21, 62,
    22, 16,
    23, 16,
    24, 14,
    24, 15,
    24, 16,
    24, 21,
    24, 34,
    24, 55,
    24, 58,
    25, 10,
    25, 16,
    25, 61,
    25, 62,
    26, 10,
    26, 15,
    26, 16,
    26, 34,
    26, 61,
    26, 62,
    27, 8,
    27, 53,
    27, 55,
    27, 56,
    27, 58,
    27, 85,
    27, 87,
    27, 90,
    33, 53,
    33, 55,
    33, 56,
    33, 58,
    34, 8,
    34, 11,
    34, 14,
    34, 17,
    34, 18,
    34, 23,
    34, 32,
    34, 48,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 61,
    34, 62,
    34, 71,
    34, 80,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    35, 10,
    35, 16,
    35, 34,
    35, 43,
    35, 53,
    35, 55,
    35, 56,
    35, 57,
    35, 58,
    35, 61,
    35, 62,
    35, 71,
    35, 84,
    35, 85,
    35, 87,
    35, 88,
    35, 89,
    35, 90,
    35, 91,
    36, 14,
    36, 48,
    36, 52,
    36, 79,
    36, 80,
    36, 84,
    36, 86,
    38, 48,
    38, 71,
    38, 80,
    38, 85,
    38, 86,
    39, 15,
    39, 16,
    39, 34,
    39, 43,
    39, 66,
    39, 71,
    39, 79,
    39, 80,
    39, 84,
    39, 85,
    39, 86,
    39, 89,
    39, 91,
    40, 10,
    40, 34,
    40, 53,
    40, 55,
    40, 57,
    40, 58,
    40, 62,
    40, 71,
    40, 85,
    40, 87,
    40, 88,
    40, 89,
    40, 90,
    42, 66,
    42, 71,
    42, 73,
    42, 77,
    42, 79,
    42, 80,
    42, 84,
    42, 85,
    42, 86,
    42, 91,
    43, 15,
    43, 16,
    43, 34,
    43, 43,
    43, 66,
    43, 71,
    43, 73,
    43, 77,
    43, 79,
    43, 80,
    43, 84,
    43, 85,
    43, 86,
    43, 89,
    43, 91,
    44, 14,
    44, 48,
    44, 52,
    44, 66,
    44, 71,
    44, 79,
    44, 80,
    44, 85,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 8,
    45, 11,
    45, 14,
    45, 18,
    45, 32,
    45, 48,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 61,
    45, 71,
    45, 80,
    45, 85,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    48, 10,
    48, 15,
    48, 16,
    48, 34,
    48, 43,
    48, 53,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 59,
    48, 61,
    48, 62,
    48, 66,
    48, 73,
    48, 74,
    48, 77,
    48, 79,
    48, 84,
    48, 89,
    48, 91,
    48, 94,
    49, 10,
    49, 15,
    49, 16,
    49, 34,
    49, 43,
    49, 57,
    49, 58,
    49, 59,
    49, 62,
    49, 66,
    49, 80,
    49, 84,
    50, 62,
    50, 75,
    50, 94,
    51, 43,
    51, 53,
    51, 55,
    51, 58,
    51, 61,
    51, 66,
    51, 71,
    51, 79,
    51, 80,
    51, 85,
    51, 86,
    52, 16,
    52, 34,
    52, 55,
    52, 58,
    52, 71,
    52, 79,
    52, 84,
    52, 85,
    52, 86,
    52, 87,
    52, 88,
    52, 89,
    52, 90,
    52, 91,
    53, 7,
    53, 14,
    53, 15,
    53, 16,
    53, 21,
    53, 27,
    53, 33,
    53, 34,
    53, 43,
    53, 48,
    53, 66,
    53, 71,
    53, 73,
    53, 74,
    53, 77,
    53, 79,
    53, 80,
    53, 84,
    53, 85,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 15,
    54, 16,
    54, 34,
    54, 43,
    54, 66,
    54, 71,
    54, 73,
    54, 74,
    54, 77,
    54, 79,
    54, 80,
    54, 84,
    54, 85,
    54, 86,
    54, 89,
    54, 91,
    55, 7,
    55, 14,
    55, 15,
    55, 16,
    55, 18,
    55, 21,
    55, 27,
    55, 33,
    55, 34,
    55, 43,
    55, 48,
    55, 52,
    55, 66,
    55, 71,
    55, 79,
    55, 80,
    55, 84,
    55, 85,
    55, 86,
    55, 89,
    55, 91,
    56, 7,
    56, 14,
    56, 15,
    56, 16,
    56, 21,
    56, 27,
    56, 33,
    56, 34,
    56, 43,
    56, 48,
    56, 66,
    56, 79,
    56, 80,
    56, 84,
    56, 86,
    56, 89,
    56, 91,
    57, 14,
    57, 48,
    57, 66,
    57, 71,
    57, 79,
    57, 80,
    57, 85,
    57, 86,
    57, 87,
    57, 88,
    57, 90,
    58, 7,
    58, 14,
    58, 15,
    58, 16,
    58, 18,
    58, 21,
    58, 23,
    58, 27,
    58, 33,
    58, 34,
    58, 43,
    58, 48,
    58, 52,
    58, 66,
    58, 71,
    58, 79,
    58, 80,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 88,
    58, 89,
    58, 90,
    58, 91,
    59, 14,
    59, 48,
    59, 71,
    59, 79,
    59, 80,
    59, 85,
    59, 86,
    59, 87,
    59, 88,
    59, 90,
    60, 17,
    60, 21,
    60, 23,
    60, 25,
    60, 26,
    60, 34,
    60, 48,
    60, 52,
    60, 66,
    60, 71,
    60, 75,
    60, 79,
    60, 80,
    60, 84,
    60, 85,
    60, 86,
    60, 87,
    60, 88,
    60, 91,
    61, 8,
    61, 18,
    61, 34,
    61, 48,
    61, 53,
    61, 54,
    61, 55,
    61, 56,
    61, 58,
    61, 85,
    61, 87,
    61, 88,
    61, 90,
    66, 10,
    66, 42,
    66, 43,
    66, 48,
    66, 52,
    66, 53,
    66, 54,
    66, 55,
    66, 56,
    66, 57,
    66, 58,
    66, 59,
    66, 61,
    66, 62,
    66, 71,
    66, 85,
    66, 87,
    66, 88,
    66, 90,
    66, 94,
    68, 10,
    68, 14,
    68, 48,
    68, 52,
    68, 53,
    68, 54,
    68, 55,
    68, 56,
    68, 58,
    68, 61,
    68, 62,
    68, 66,
    68, 80,
    68, 84,
    69, 42,
    69, 43,
    69, 48,
    69, 53,
    69, 54,
    69, 59,
    70, 10,
    70, 16,
    70, 34,
    70, 42,
    70, 43,
    70, 52,
    70, 53,
    70, 54,
    70, 55,
    70, 56,
    70, 57,
    70, 58,
    70, 59,
    70, 61,
    70, 62,
    70, 71,
    70, 85,
    70, 87,
    70, 89,
    70, 90,
    70, 94,
    71, 14,
    71, 15,
    71, 16,
    71, 27,
    71, 34,
    71, 43,
    71, 53,
    71, 55,
    71, 56,
    71, 57,
    71, 58,
    71, 62,
    71, 66,
    71, 80,
    71, 84,
    74, 42,
    74, 43,
    74, 48,
    74, 53,
    74, 54,
    74, 59,
    75, 75,
    76, 14,
    76, 48,
    76, 53,
    76, 54,
    76, 55,
    76, 58,
    76, 66,
    76, 80,
    76, 84,
    77, 42,
    77, 43,
    77, 48,
    77, 53,
    77, 54,
    77, 59,
    79, 10,
    79, 11,
    79, 42,
    79, 43,
    79, 48,
    79, 52,
    79, 53,
    79, 54,
    79, 55,
    79, 56,
    79, 57,
    79, 58,
    79, 59,
    79, 61,
    79, 62,
    79, 71,
    79, 85,
    79, 87,
    79, 88,
    79, 90,
    79, 94,
    80, 8,
    80, 10,
    80, 11,
    80, 16,
    80, 32,
    80, 34,
    80, 42,
    80, 43,
    80, 52,
    80, 53,
    80, 54,
    80, 55,
    80, 56,
    80, 57,
    80, 58,
    80, 59,
    80, 61,
    80, 62,
    80, 71,
    80, 85,
    80, 87,
    80, 88,
    80, 89,
    80, 90,
    80, 91,
    80, 94,
    82, 75,
    83, 7,
    83, 10,
    83, 14,
    83, 15,
    83, 16,
    83, 27,
    83, 34,
    83, 43,
    83, 53,
    83, 57,
    83, 58,
    83, 59,
    83, 62,
    83, 66,
    83, 80,
    83, 94,
    84, 10,
    84, 16,
    84, 34,
    84, 42,
    84, 48,
    84, 53,
    84, 54,
    84, 55,
    84, 56,
    84, 57,
    84, 58,
    84, 61,
    84, 62,
    84, 87,
    84, 89,
    84, 94,
    85, 53,
    85, 54,
    85, 55,
    85, 56,
    85, 58,
    85, 61,
    85, 62,
    85, 80,
    86, 10,
    86, 42,
    86, 43,
    86, 48,
    86, 53,
    86, 54,
    86, 55,
    86, 56,
    86, 57,
    86, 58,
    86, 59,
    86, 61,
    86, 62,
    87, 10,
    87, 11,
    87, 15,
    87, 16,
    87, 27,
    87, 34,
    87, 43,
    87, 53,
    87, 57,
    87, 58,
    87, 59,
    87, 62,
    87, 66,
    87, 80,
    87, 84,
    88, 10,
    88, 15,
    88, 16,
    88, 34,
    88, 43,
    88, 53,
    88, 57,
    88, 58,
    88, 59,
    88, 62,
    88, 66,
    88, 80,
    88, 84,
    89, 14,
    89, 48,
    89, 53,
    89, 54,
    89, 55,
    89, 58,
    89, 66,
    89, 80,
    90, 10,
    90, 11,
    90, 15,
    90, 16,
    90, 27,
    90, 34,
    90, 43,
    90, 53,
    90, 57,
    90, 58,
    90, 59,
    90, 62,
    90, 66,
    90, 80,
    90, 84,
    91, 14,
    91, 42,
    91, 48,
    91, 53,
    91, 54,
    91, 55,
    91, 56,
    91, 58,
    91, 61,
    91, 62,
    91, 80,
    92, 48,
    92, 66,
    92, 75,
    92, 80,
    92, 84,
    92, 86,
    93, 75,
    94, 10
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -3, 1, -2, -2, -2, -2, -2, -12,
    -7, -2, -1, -4, -2, -1, -1, -2,
    -2, -2, -2, -1, -2, -1, -2, -1,
    9, -1, -3, -2, -1, -2, -1, -1,
    -1, -1, -4, -2, -1, 1, 1, -1,
    -3, -2, -2, -2, -1, -3, -1, -5,
    -2, -2, -3, -4, -2, -1, -1, -2,
    -2, -12, -1, -3, -1, -2, -2, -6,
    -1, -6, -5, -6, -1, -2, -3, -3,
    -3, -27, -2, -4, -2, -2, -1, -6,
    -1, -2, -2, -4, -1, -3, -4, -4,
    -2, -1, -1, -2, -2, -2, -1, -2,
    -1, -1, -2, -1, -2, -2, -1, -1,
    -1, -2, -1, -1, -2, -1, -1, -1,
    -2, -6, -6, -2, -4, 1, 2, -2,
    -1, -1, -2, -2, -1, -2, -1, -1,
    -2, -1, -5, -3, -2, -4, -1, -1,
    -1, -2, -2, -1, -2, -4, -4, -1,
    -1, -2, -1, -2, -2, -5, -2, -4,
    -3, -5, -5, -1, -1, -1, -2, -1,
    -3, -2, -3, -2, -1, -1, -1, -2,
    -1, -1, -1, -2, -1, -2, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1,
    0, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -5, -4, -4, -2, -2, -1,
    -1, -1, -2, 0, -1, -1, -2, -1,
    -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, 0,
    0, -1, -1, -1, 0, 0, -1, -2,
    -1, -1, -1, -1, 0, 0, 0, -1,
    -1, -1, -1, -1, -1, -3, -3, -1,
    -1, -1, 0, -4, -1, -2, -2, -3,
    -2, -8, -8, -6, -2, -2, -2, -7,
    -2, -6, -5, -6, -7, -1, -1, -3,
    -1, -6, -5, -6, -2, -2, -3, -2,
    -2, -2, -1, -1, -2, -2, -1, -2,
    -2, 0, 0, 0, 0, 0, -1, -1,
    -1, -1, -2, -6, -5, -4, -3, -2,
    -1, -1, -2, -1, -1, -1, -1, 6,
    0, 0, -1, -1, -1, -1, -1, 0,
    0, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -5, -6, -5, -3, -5,
    -3, -5, -1, -2, -7, -2, 0, 0,
    0, -5, -6, -7, -1, -5, -7, -6,
    -6, -7, -7, -2, -2, -2, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -2, -6, -5, 0,
    -2, -3, -2, -4, -1, -1, -1, -4,
    -1, -3, -4, -4, 0, -2, -1, -2,
    -1, -2, -5, -5, -1, -2, -1, -3,
    -1, -1, -4, -2, -4, -4, -2, 0,
    -2, -3, -2, -1, -1, -1, -3, -2,
    -2, -2, -3, -2, -2, -4, -6, -6,
    1, -3, -1, -4, -3, -5, -1, -2,
    -1, -5, -1, -3, -6, -5, -1, -3,
    -1, -1, -2, -1, -4, -2, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -2,
    -3, -2, -2, -1, -1, -2, -1, -2,
    -1, 9, -2, -3, -2, -1, -2, -1,
    -2, -2, -5, -2, 1, -1, -4, -1,
    -4, -3, -4, -1, -2, -2, -2, -2,
    0, -1, -1, 0, -5, -1, -3, -2,
    0, -5, -1, -3, -2, 0, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -8,
    -1, -2, -2, -4, -2, -2, 0, -1,
    0, 0, -1, 0, 0, -1, -1, -2,
    -2, -1, -1, -1, -1, -7, -1, -4,
    -3, -2, -5, -1, -3, -2, 0, 0,
    -1, -1, -1, -1, -3, -3, -3, -2,
    -4, -1, 2, 4, 4, 2, 5, 1,
    0, -1, 0, 0, -1, 0, 0, -1,
    -1, 2, -3, -2, -6, 0, -1, -2,
    -1, -2, 0, 0, -1, 0, 0, -1,
    -1, -2, -1, 0, -1, -1, 0, -5,
    -1, -3, -2, 0, -5, -1, -3, -2,
    0, -1, -1, -1, -1, -1, -1, -3,
    -1, -2, -1, -1, -1, -1, -1, -6,
    -1, -4, -4, -3, -6, -2, -4, -3,
    -1, -1, -1, -1, -2, -1, -1, -2,
    6, -1, -2, -3, -4, -4, -2, -4,
    -4, -7, -3, -1, -1, -2, 0, -1,
    -1, -2, -1, 0, -1, 0, -7, -1,
    -3, -2, -1, -4, -2, -2, 0, 0,
    -1, -6, -1, -2, -1, -3, -2, -1,
    0, -1, 0, -1, 0, -5, 0, -3,
    -2, -1, -3, -1, -2, -2, -1, 1,
    -3, -4, -1, -3, -2, -7, -2, -1,
    -1, -1, -1, -1, -1, -1, -3, -3,
    -2, -3, -6, -2, -1, -1, -2, 0,
    -1, 0, -2, -1, -6, -1, -1, -2,
    0, -2, -1, 1, -3, -4, -1, -3,
    -2, -7, -2, -1, -1, -1, -1, -1,
    -1, -2, 0, -1, -7, -1, -2, -2,
    -4, -2, -2, -1, -1, -1, 8, -2,
    -1, -1, 5, -1
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 764,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t lv_font_montserrat_6 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 6,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LV_FONT_MONTSERRAT_6*/
