#include "../../lvgl.h"


/*******************************************************************************
 * Size: 8 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_MONTSERRAT_8
#define LV_FONT_MONTSERRAT_8 1
#endif

#if LV_FONT_MONTSERRAT_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+21 "!" */
    0x5b, 0x5b, 0x39, 0x15, 0x4a,

    /* U+22 "\"" */
    0x67, 0x65, 0x64,

    /* U+23 "#" */
    0x2, 0xb1, 0xc0, 0x3e, 0xee, 0xe5, 0x9, 0x58,
    0x50, 0x7f, 0xdf, 0xd2, 0xe, 0xd, 0x0,

    /* U+24 "$" */
    0x0, 0x80, 0x2, 0xce, 0xd2, 0x6a, 0x80, 0x1,
    0x9e, 0xa1, 0x11, 0x89, 0x84, 0xce, 0xc3, 0x0,
    0x10, 0x0,

    /* U+25 "%" */
    0x6b, 0x80, 0xb4, 0x4a, 0x69, 0x70, 0x0, 0x6a,
    0x0, 0x3, 0xc3, 0xb8, 0x2c, 0x14, 0xba,

    /* U+26 "&" */
    0x8, 0xbc, 0x10, 0xc, 0x5c, 0x10, 0x1b, 0xe4,
    0x20, 0x86, 0x1c, 0xc0, 0x3c, 0xba, 0xb1, 0x0,
    0x0, 0x0,

    /* U+27 "'" */
    0x63, 0x53,

    /* U+28 "(" */
    0xc, 0x14, 0x90, 0x85, 0x9, 0x40, 0x77, 0x2,
    0xc0, 0x7, 0x10,

    /* U+29 ")" */
    0x68, 0x0, 0xd0, 0xb, 0x20, 0xa3, 0xc, 0x12,
    0xc0, 0x53, 0x0,

    /* U+2A "*" */
    0x3a, 0x53, 0xc7, 0x3, 0x0,

    /* U+2B "+" */
    0x0, 0x50, 0x0, 0x1a, 0x0, 0x6b, 0xeb, 0x10,
    0x1a, 0x0,

    /* U+2C "," */
    0x47, 0x45,

    /* U+2D "-" */
    0x5c, 0xc2,

    /* U+2E "." */
    0x0, 0x59,

    /* U+2F "/" */
    0x0, 0x8, 0x30, 0x1, 0xb0, 0x0, 0x84, 0x0,
    0x1b, 0x0, 0x8, 0x40, 0x1, 0xb0, 0x0, 0x84,
    0x0, 0x0,

    /* U+30 "0" */
    0xa, 0xcc, 0x30, 0x5a, 0x2, 0xd0, 0x76, 0x0,
    0xe0, 0x5a, 0x2, 0xd0, 0xa, 0xcc, 0x40,

    /* U+31 "1" */
    0x9e, 0x40, 0xa4, 0xa, 0x40, 0xa4, 0xa, 0x40,

    /* U+32 "2" */
    0x2c, 0xd9, 0x1, 0x20, 0xe0, 0x0, 0x88, 0x0,
    0xa8, 0x0, 0x7f, 0xdd, 0x30,

    /* U+33 "3" */
    0x4c, 0xed, 0x0, 0x1d, 0x30, 0x8, 0xd8, 0x0,
    0x0, 0xd1, 0x5c, 0xd9, 0x0,

    /* U+34 "4" */
    0x1, 0xd1, 0x0, 0xa6, 0x0, 0x4c, 0x49, 0x9,
    0xdd, 0xe3, 0x0, 0x49, 0x0,

    /* U+35 "5" */
    0x5e, 0xcb, 0x5, 0x80, 0x0, 0x4d, 0xc8, 0x0,
    0x0, 0xc2, 0x4d, 0xd9, 0x0,

    /* U+36 "6" */
    0x9, 0xca, 0x15, 0xcc, 0xa0, 0x7b, 0x7, 0x66,
    0xa0, 0x67, 0xb, 0xcb, 0x10,

    /* U+37 "7" */
    0xad, 0xcf, 0x45, 0x13, 0xd0, 0x0, 0xb5, 0x0,
    0x4c, 0x0, 0xd, 0x30, 0x0,

    /* U+38 "8" */
    0x1b, 0xbb, 0x14, 0xa0, 0x85, 0x1e, 0xcf, 0x27,
    0x70, 0x68, 0x2c, 0xcc, 0x30,

    /* U+39 "9" */
    0x2c, 0xca, 0x8, 0x60, 0xa5, 0x2b, 0xbb, 0x70,
    0x0, 0xb4, 0x2c, 0xd9, 0x0,

    /* U+3A ":" */
    0x49, 0x1, 0x49,

    /* U+3B ";" */
    0x49, 0x0, 0x48, 0x36,

    /* U+3C "<" */
    0x0, 0x0, 0x0, 0x5, 0xb1, 0x5c, 0x81, 0x6,
    0xc6, 0x0, 0x0, 0x6c, 0x10, 0x0, 0x0,

    /* U+3D "=" */
    0x5b, 0xbb, 0x55, 0xbb, 0xb5,

    /* U+3E ">" */
    0x0, 0x0, 0x5, 0xa3, 0x0, 0x3, 0x9b, 0x20,
    0x18, 0xc3, 0x4b, 0x50, 0x0, 0x0, 0x0,

    /* U+3F "?" */
    0x4d, 0xd4, 0x31, 0x78, 0x4, 0xb0, 0x3, 0x20,
    0x7, 0x70,

    /* U+40 "@" */
    0x0, 0x55, 0x51, 0x1, 0x6a, 0xbc, 0xb2, 0x54,
    0x80, 0x85, 0x65, 0x48, 0x8, 0x56, 0x15, 0xaa,
    0x6a, 0x50, 0x15, 0x43, 0x0,

    /* U+41 "A" */
    0x0, 0xcb, 0x0, 0x4, 0xbc, 0x30, 0xc, 0x35,
    0xb0, 0x4f, 0xcc, 0xf3, 0xc4, 0x0, 0x5b,

    /* U+42 "B" */
    0x3f, 0xdd, 0x70, 0x3b, 0x2, 0xd0, 0x3f, 0xde,
    0x80, 0x3b, 0x0, 0xd2, 0x3f, 0xdd, 0xb0,

    /* U+43 "C" */
    0x6, 0xdd, 0xc2, 0x4c, 0x10, 0x21, 0x87, 0x0,
    0x0, 0x4c, 0x10, 0x31, 0x6, 0xdd, 0xb2,

    /* U+44 "D" */
    0x3f, 0xdd, 0x90, 0x3b, 0x0, 0x89, 0x3b, 0x0,
    0x3c, 0x3b, 0x0, 0x88, 0x3f, 0xdd, 0x90,

    /* U+45 "E" */
    0x3f, 0xdd, 0x93, 0xb0, 0x0, 0x3e, 0xcc, 0x43,
    0xb0, 0x0, 0x3f, 0xdd, 0xa0,

    /* U+46 "F" */
    0x3f, 0xdd, 0x63, 0xb0, 0x0, 0x3f, 0xdd, 0x23,
    0xb0, 0x0, 0x3b, 0x0, 0x0,

    /* U+47 "G" */
    0x6, 0xdd, 0xb1, 0x4c, 0x10, 0x10, 0x87, 0x0,
    0x23, 0x4c, 0x0, 0x69, 0x6, 0xdd, 0xc3,

    /* U+48 "H" */
    0x3b, 0x0, 0x87, 0x3b, 0x0, 0x87, 0x3f, 0xdd,
    0xe7, 0x3b, 0x0, 0x87, 0x3b, 0x0, 0x87,

    /* U+49 "I" */
    0x3b, 0x3b, 0x3b, 0x3b, 0x3b,

    /* U+4A "J" */
    0xc, 0xdb, 0x0, 0x4b, 0x0, 0x4b, 0x10, 0x5a,
    0x6d, 0xd3,

    /* U+4B "K" */
    0x3b, 0x4, 0xd1, 0x3b, 0x5d, 0x10, 0x3e, 0xf8,
    0x0, 0x3d, 0x1d, 0x40, 0x3b, 0x2, 0xd2,

    /* U+4C "L" */
    0x3b, 0x0, 0x3, 0xb0, 0x0, 0x3b, 0x0, 0x3,
    0xb0, 0x0, 0x3f, 0xdd, 0x30,

    /* U+4D "M" */
    0x3f, 0x80, 0xa, 0xf1, 0x3d, 0xe1, 0x3d, 0xe1,
    0x3b, 0x79, 0xb5, 0xd1, 0x3b, 0xe, 0xc0, 0xd1,
    0x3b, 0x4, 0x30, 0xd1,

    /* U+4E "N" */
    0x3f, 0x30, 0xe, 0x3d, 0xd1, 0xe, 0x3b, 0x4d,
    0x1e, 0x3b, 0x6, 0xce, 0x3b, 0x0, 0x8e,

    /* U+4F "O" */
    0x6, 0xcc, 0xc3, 0x4, 0xc0, 0x3, 0xe1, 0x87,
    0x0, 0xb, 0x34, 0xc0, 0x2, 0xe1, 0x6, 0xcc,
    0xc3, 0x0,

    /* U+50 "P" */
    0x3f, 0xcd, 0x70, 0x3b, 0x0, 0xe1, 0x3b, 0x1,
    0xe0, 0x3f, 0xcc, 0x50, 0x3b, 0x0, 0x0,

    /* U+51 "Q" */
    0x6, 0xcc, 0xc3, 0x4, 0xc0, 0x3, 0xe1, 0x87,
    0x0, 0xb, 0x34, 0xc0, 0x2, 0xe1, 0x6, 0xcd,
    0xd4, 0x10, 0x0, 0x2c, 0xd5,

    /* U+52 "R" */
    0x3f, 0xcc, 0xa0, 0x3b, 0x0, 0xd2, 0x3f, 0xcf,
    0x90, 0x3b, 0xa, 0x80, 0x3b, 0x1, 0xe3,

    /* U+53 "S" */
    0x1c, 0xdc, 0x26, 0xa0, 0x10, 0x9, 0xca, 0x22,
    0x20, 0x79, 0x3c, 0xdd, 0x30,

    /* U+54 "T" */
    0x9c, 0xfc, 0x70, 0x1e, 0x0, 0x1, 0xe0, 0x0,
    0x1e, 0x0, 0x1, 0xe0, 0x0,

    /* U+55 "U" */
    0x4a, 0x0, 0x87, 0x4a, 0x0, 0x87, 0x4a, 0x0,
    0x86, 0x2d, 0x0, 0xb4, 0x7, 0xdd, 0x80,

    /* U+56 "V" */
    0xb4, 0x0, 0xb5, 0x4c, 0x2, 0xe0, 0xd, 0x3a,
    0x70, 0x6, 0xce, 0x0, 0x0, 0xe8, 0x0,

    /* U+57 "W" */
    0xb4, 0x6, 0xc0, 0xe, 0x15, 0xa0, 0xbe, 0x25,
    0xb0, 0xe, 0x2d, 0x77, 0xb4, 0x0, 0x8c, 0x71,
    0xee, 0x0, 0x2, 0xf2, 0xc, 0x80, 0x0,

    /* U+58 "X" */
    0x6c, 0x6, 0xb0, 0xa, 0xae, 0x10, 0x2, 0xf8,
    0x0, 0xb, 0x7e, 0x20, 0x8a, 0x4, 0xd0,

    /* U+59 "Y" */
    0xb, 0x40, 0x4b, 0x0, 0x1d, 0x2d, 0x10, 0x0,
    0x5f, 0x50, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf,
    0x0, 0x0,

    /* U+5A "Z" */
    0x6d, 0xde, 0xe0, 0x1, 0xd3, 0x1, 0xd4, 0x0,
    0xc5, 0x0, 0x9f, 0xdd, 0xc0,

    /* U+5B "[" */
    0x4c, 0x54, 0x60, 0x46, 0x4, 0x60, 0x46, 0x4,
    0x60, 0x3a, 0x40,

    /* U+5C "\\" */
    0x84, 0x0, 0x1b, 0x0, 0x9, 0x30, 0x1, 0xb0,
    0x0, 0x93, 0x0, 0x1a,

    /* U+5D "]" */
    0x6d, 0x20, 0x92, 0x9, 0x20, 0x92, 0x9, 0x20,
    0x92, 0x6b, 0x10,

    /* U+5E "^" */
    0x5a, 0x70,

    /* U+5F "_" */
    0x27, 0x77, 0x71,

    /* U+60 "`" */
    0x0, 0x1, 0xc0,

    /* U+61 "a" */
    0x1a, 0xba, 0x3, 0xa9, 0xe1, 0x95, 0xd, 0x14,
    0xca, 0xe1,

    /* U+62 "b" */
    0x58, 0x0, 0x5, 0x80, 0x0, 0x5c, 0xbc, 0x45,
    0xa0, 0x1d, 0x5a, 0x1, 0xd5, 0xcb, 0xd4,

    /* U+63 "c" */
    0xb, 0xcc, 0x18, 0x70, 0x0, 0x87, 0x1, 0x1,
    0xbc, 0xb1,

    /* U+64 "d" */
    0x0, 0x2, 0xb0, 0x0, 0x2b, 0x1b, 0xba, 0xb8,
    0x70, 0x5b, 0x86, 0x4, 0xb1, 0xba, 0xbb,

    /* U+65 "e" */
    0x19, 0xbb, 0x38, 0xca, 0xb7, 0x87, 0x2, 0x1,
    0xbb, 0xb1,

    /* U+66 "f" */
    0xa, 0xc1, 0x1c, 0x0, 0x8e, 0x90, 0x2c, 0x0,
    0x2c, 0x0, 0x2c, 0x0,

    /* U+67 "g" */
    0x1b, 0xab, 0x98, 0x60, 0x69, 0x86, 0x7, 0x91,
    0xcb, 0xb8, 0x1a, 0xbb, 0x10,

    /* U+68 "h" */
    0x58, 0x0, 0x5, 0x80, 0x0, 0x5b, 0xad, 0x35,
    0xa0, 0x68, 0x58, 0x5, 0x95, 0x80, 0x59,

    /* U+69 "i" */
    0x58, 0x0, 0x58, 0x58, 0x58, 0x58,

    /* U+6A "j" */
    0x5, 0x70, 0x0, 0x5, 0x80, 0x58, 0x5, 0x80,
    0x68, 0x9d, 0x40,

    /* U+6B "k" */
    0x58, 0x0, 0x5, 0x80, 0x0, 0x58, 0x4c, 0x15,
    0xce, 0x10, 0x5d, 0xa7, 0x5, 0x80, 0xd3,

    /* U+6C "l" */
    0x58, 0x58, 0x58, 0x58, 0x58, 0x58,

    /* U+6D "m" */
    0x5c, 0xac, 0x7a, 0xc2, 0x5a, 0x7, 0x90, 0x77,
    0x58, 0x6, 0x70, 0x68, 0x58, 0x6, 0x70, 0x68,

    /* U+6E "n" */
    0x5c, 0xad, 0x35, 0xa0, 0x68, 0x58, 0x5, 0x95,
    0x80, 0x59,

    /* U+6F "o" */
    0x1b, 0xbb, 0x28, 0x60, 0x3b, 0x86, 0x3, 0xb1,
    0xbc, 0xb2,

    /* U+70 "p" */
    0x5c, 0xac, 0x45, 0xa0, 0x1d, 0x5b, 0x1, 0xd5,
    0xcb, 0xd4, 0x58, 0x0, 0x0,

    /* U+71 "q" */
    0x1b, 0xba, 0xb8, 0x60, 0x5b, 0x86, 0x5, 0xb1,
    0xbb, 0xab, 0x0, 0x2, 0xb0,

    /* U+72 "r" */
    0x5b, 0xa5, 0xb0, 0x58, 0x5, 0x80,

    /* U+73 "s" */
    0x3c, 0xb4, 0x5c, 0x50, 0x12, 0x99, 0x6c, 0xc5,

    /* U+74 "t" */
    0x2c, 0x0, 0x8e, 0x90, 0x2c, 0x0, 0x2c, 0x0,
    0xb, 0xb1,

    /* U+75 "u" */
    0x68, 0x6, 0x86, 0x80, 0x68, 0x68, 0x7, 0x81,
    0xca, 0xb8,

    /* U+76 "v" */
    0xb3, 0xa, 0x44, 0xa1, 0xd0, 0xd, 0x97, 0x0,
    0x6f, 0x0,

    /* U+77 "w" */
    0xa4, 0xf, 0x40, 0xd0, 0x49, 0x5c, 0xa4, 0x90,
    0xd, 0xb3, 0xdb, 0x30, 0x9, 0xd0, 0x8d, 0x0,

    /* U+78 "x" */
    0x6a, 0x3c, 0x0, 0xae, 0x20, 0xb, 0xe3, 0x7,
    0x93, 0xd1,

    /* U+79 "y" */
    0xa4, 0xa, 0x43, 0xc2, 0xc0, 0xb, 0xd4, 0x0,
    0x5d, 0x0, 0x9d, 0x30, 0x0,

    /* U+7A "z" */
    0x5b, 0xdd, 0x2, 0xd3, 0x1d, 0x30, 0x9e, 0xbb,

    /* U+7B "{" */
    0xc, 0x21, 0xb0, 0x1b, 0x8, 0x80, 0x1b, 0x1,
    0xb0, 0xb, 0x20,

    /* U+7C "|" */
    0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45,

    /* U+7D "}" */
    0x79, 0x0, 0xc0, 0xc, 0x0, 0xd4, 0xc, 0x0,
    0xc0, 0x67, 0x0,

    /* U+7E "~" */
    0x3c, 0x68, 0x5, 0x29, 0xa0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 35, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 38, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 48, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 8, .adv_w = 94, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 79, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 41, .adv_w = 101, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 74, .adv_w = 30, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 76, .adv_w = 42, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 87, .adv_w = 42, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 98, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 103, .adv_w = 73, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 113, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 115, .adv_w = 61, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 117, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 75, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 137, .adv_w = 88, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 49, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 79, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 38, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 271, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 80, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 291, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 65, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 116, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 337, .adv_w = 95, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 90, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 94, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 100, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 97, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 99, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 90, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 126, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 107, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 108, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 88, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 108, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 585, .adv_w = 93, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 98, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 90, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 134, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 86, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 80, .box_w = 7, .box_h = 5, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 86, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 45, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 736, .adv_w = 67, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 45, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 759, .adv_w = 50, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 761, .adv_w = 92, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 764, .adv_w = 107, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 767, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 86, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 74, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 86, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 79, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 49, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 852, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 35, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 873, .adv_w = 35, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 884, .adv_w = 74, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 35, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 130, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 83, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 931, .adv_w = 83, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 86, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 954, .adv_w = 86, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 967, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 981, .adv_w = 54, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 991, .adv_w = 83, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 73, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1011, .adv_w = 117, .box_w = 8, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1027, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1037, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1050, .adv_w = 69, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 43, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1069, .adv_w = 33, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1076, .adv_w = 43, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1087, .adv_w = 72, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 2}
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
    -4, 1, -3, -3, -2, -3, -2, -16,
    -9, -3, -1, -6, -2, -1, -1, -2,
    -3, -3, -2, -1, -3, -1, -2, -2,
    12, -2, -3, -2, -2, -3, -2, -2,
    -1, -1, -6, -3, -1, 1, 1, -1,
    -3, -2, -2, -2, -2, -4, -1, -7,
    -3, -2, -4, -6, -2, -1, -1, -3,
    -2, -16, -1, -4, -1, -2, -2, -7,
    -2, -7, -6, -8, -1, -2, -5, -4,
    -5, -36, -3, -5, -3, -2, -1, -8,
    -2, -3, -2, -5, -2, -4, -6, -6,
    -3, -1, -1, -2, -3, -2, -1, -3,
    -1, -2, -3, -1, -2, -3, -2, -2,
    -2, -3, -2, -2, -2, -2, -2, -2,
    -3, -8, -8, -3, -5, 1, 2, -2,
    -2, -1, -2, -2, -2, -3, -1, -2,
    -3, -1, -7, -4, -3, -6, -1, -1,
    -1, -3, -2, -1, -3, -6, -6, -2,
    -1, -3, -1, -3, -2, -7, -2, -5,
    -4, -7, -7, -2, -1, -1, -3, -1,
    -4, -3, -4, -2, -2, -1, -1, -2,
    -2, -1, -1, -2, -2, -3, -1, -1,
    -1, -1, -1, -2, -1, -1, -1, -2,
    -1, -1, -2, -1, -1, -1, -1, -1,
    -1, -1, -7, -6, -6, -2, -3, -1,
    -2, -2, -3, -1, -2, -1, -2, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -3,
    -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -3, -4, -2,
    -1, -1, -1, -5, -2, -3, -3, -4,
    -3, -11, -11, -8, -3, -3, -3, -9,
    -2, -8, -7, -8, -9, -2, -1, -4,
    -1, -8, -6, -8, -3, -2, -4, -2,
    -3, -2, -2, -1, -3, -3, -2, -2,
    -3, -1, -1, -1, -1, -1, -1, -2,
    -1, -1, -2, -8, -6, -5, -4, -2,
    -1, -1, -2, -1, -1, -1, -2, 8,
    -1, -1, -1, -1, -2, -2, -1, -1,
    -1, -2, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -2, -1, -1, -1, -1,
    -1, -1, -2, -7, -7, -7, -4, -7,
    -3, -7, -2, -2, -9, -3, -1, -1,
    -1, -6, -8, -9, -1, -7, -9, -8,
    -9, -9, -9, -2, -3, -2, -2, -1,
    -1, -1, -1, -1, -1, -1, -2, -1,
    -1, -1, -1, -2, -3, -7, -7, 1,
    -3, -4, -2, -5, -2, -2, -1, -6,
    -1, -4, -6, -6, -1, -3, -1, -3,
    -1, -2, -6, -6, -2, -3, -1, -4,
    -2, -1, -5, -3, -5, -5, -3, -1,
    -2, -3, -3, -1, -2, -1, -4, -2,
    -3, -3, -3, -3, -2, -6, -8, -7,
    2, -4, -1, -6, -4, -7, -1, -3,
    -1, -6, -1, -4, -8, -7, -1, -5,
    -1, -2, -3, -1, -5, -2, -2, -1,
    -1, -2, -1, -1, -1, -1, -1, -3,
    -3, -3, -2, -1, -2, -3, -2, -3,
    -1, 12, -2, -4, -3, -1, -3, -2,
    -2, -2, -7, -3, 1, -1, -5, -2,
    -5, -4, -6, -1, -3, -2, -3, -2,
    -1, -1, -1, -1, -7, -1, -4, -3,
    -1, -6, -1, -4, -3, -1, -1, -1,
    -1, -1, -1, -2, -2, -1, -1, -10,
    -1, -3, -2, -6, -3, -2, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -3,
    -2, -1, -1, -1, -1, -10, -1, -6,
    -5, -2, -7, -2, -4, -3, -1, -1,
    -1, -1, -1, -2, -4, -4, -4, -3,
    -5, -1, 2, 6, 5, 2, 7, 2,
    -1, -2, -1, -1, -1, -1, -1, -1,
    -1, 2, -4, -2, -8, -1, -1, -2,
    -1, -3, -1, -1, -1, -1, -1, -1,
    -1, -2, -1, -1, -1, -1, -1, -7,
    -1, -4, -3, -1, -6, -1, -4, -3,
    -1, -1, -1, -1, -1, -1, -1, -3,
    -1, -3, -1, -1, -1, -2, -1, -8,
    -1, -6, -5, -4, -8, -3, -5, -4,
    -1, -1, -1, -1, -2, -1, -1, -2,
    7, -2, -2, -4, -6, -6, -2, -6,
    -5, -9, -4, -1, -2, -2, -1, -1,
    -1, -3, -1, -1, -1, -1, -9, -1,
    -4, -3, -1, -6, -3, -3, -1, -1,
    -1, -7, -1, -2, -2, -4, -2, -2,
    -1, -2, -1, -1, -1, -6, -1, -4,
    -3, -1, -4, -1, -3, -2, -2, 1,
    -5, -5, -1, -4, -3, -9, -3, -1,
    -1, -2, -1, -1, -1, -2, -4, -4,
    -3, -4, -8, -3, -2, -1, -2, -1,
    -1, -1, -3, -2, -8, -1, -1, -2,
    -1, -3, -1, 1, -5, -5, -1, -4,
    -3, -9, -3, -1, -1, -1, -1, -1,
    -1, -2, -1, -1, -9, -1, -3, -2,
    -5, -2, -2, -1, -2, -1, 10, -2,
    -1, -2, 7, -1
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
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t lv_font_montserrat_8 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LV_FONT_MONTSERRAT_8*/

