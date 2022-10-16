#ifndef _RA8875COLORPRESETS_H_
#define _RA8875COLORPRESETS_H_

// Colors preset (RGB565)
const uint16_t	RA8875_BLACK            = 0x0000;
const uint16_t 	RA8875_WHITE            = 0xFFFF;

const uint16_t	RA8875_RED              = 0xF800;
const uint16_t	RA8875_GREEN            = 0x07E0;
const uint16_t	RA8875_BLUE             = 0x001F;

const uint16_t 	RA8875_CYAN             = RA8875_GREEN | RA8875_BLUE;//0x07FF;
const uint16_t 	RA8875_MAGENTA          = 0xF81F;
const uint16_t 	RA8875_YELLOW           = RA8875_RED | RA8875_GREEN;//0xFFE0;  
const uint16_t 	RA8875_LIGHT_GREY 		= 0xB5B2; // the experimentalist
const uint16_t 	RA8875_LIGHT_ORANGE 	= 0xFC80; // the experimentalist
const uint16_t 	RA8875_DARK_ORANGE 		= 0xFB60; // the experimentalist
const uint16_t 	RA8875_PINK 			= 0xFCFF; // M.Sandercock
const uint16_t 	RA8875_PURPLE 			= 0x8017; // M.Sandercock
const uint16_t 	RA8875_GRAYSCALE 		= 2113;//grayscale30 = RA8875_GRAYSCALE*30

// Jason Gaunt - Generated with https://chrishewett.com/blog/true-rgb565-colour-picker/
const uint64_t  RA8875_LIGHT_RED        = 0xFBEF;
const uint64_t  RA8875_LIGHT_YELLOW     = 0xFFEF;
const uint64_t  RA8875_LIGHT_GREEN      = 0x7FEF;
const uint64_t  RA8875_SKY_BLUE         = 0xBFFF;
const uint64_t  RA8875_LIGHT_BLUE       = 0x7BFF;
const uint64_t  RA8875_LIGHT_INDIGO     = 0x7BDF;
const uint64_t  RA8875_LIGHT_GRAY       = 0xBDF7;

const uint64_t  RA8875_INDIGO           = 0x781F;
const uint64_t  RA8875_GRAY             = 0x7BEF;

const uint64_t  RA8875_DARK_RED         = 0x7800;
const uint64_t  RA8875_DARK_YELLOW      = 0x7BE0;
const uint64_t  RA8875_DARK_GREEN       = 0x03E0;
const uint64_t  RA8875_TEAL             = 0x03EF;
const uint64_t  RA8875_DARK_BLUE        = 0x000F;
const uint64_t  RA8875_DARK_INDIGO      = 0x380F;
const uint64_t  RA8875_DARK_GRAY        = 0x39E7;

#endif