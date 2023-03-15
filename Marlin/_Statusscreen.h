/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from 38x24 C/C++ data
 */

#define STATUS_LOGO_WIDTH 38
#define STATUS_LOGO_Y 2

const unsigned char status_logo_bmp[] PROGMEM = {
    B00000000, B00000000, B00000000, B10000000, B00000000,
    B00000000, B00000000, B00100000, B10000000, B00000000,
    B00000000, B00000000, B00100001, B10000000, B00000000,
    B00000000, B00000000, B00010001, B00000000, B00000000,
    B00000000, B00000000, B00011001, B10000000, B00000000,
    B00001000, B11100111, B10111101, B10001001, B00000000,
    B10000111, B11111111, B11111111, B11100100, B11000000,
    B01000001, B00000000, B11111111, B11110011, B00100000,
    B00111000, B11111111, B11111111, B11110000, B10100000,
    B00011111, B11110011, B11111111, B11111000, B01010000,
    B00000000, B00000011, B11111111, B11001100, B01101000,
    B00000000, B00001111, B11111111, B11101111, B00010100,
    B00001001, B11111111, B00000011, B11111111, B11111100,
    B00000111, B11110000, B00010001, B11111111, B11111100,
    B00000000, B00000000, B00001111, B11111111, B11111100,
    B00000000, B00000000, B00000011, B11111110, B00011100,
    B00000000, B00000000, B00000000, B01111110, B00001000,
    B00000000, B00000000, B00000000, B00011110, B00001000,
    B00000000, B00000000, B00000000, B00001111, B00000000,
    B00000000, B00000000, B00000000, B10000111, B11000000,
    B00000000, B00000000, B00001000, B01000011, B11000000,
    B00000000, B00000000, B00000110, B00110111, B10000000,
    B00000000, B00000000, B00000001, B11111110, B00000000,
    B00000000, B00000000, B00000000, B01110000, B00000000};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE 20
#if HOTENDS < 2
#define STATUS_HEATERS_X 48
#define STATUS_BED_X 72
#else
#define STATUS_HEATERS_X 40
#define STATUS_BED_X 80
#endif
