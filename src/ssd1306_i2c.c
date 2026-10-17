#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "pico/stdlib.h"
#include "pico/binary_info.h"
#include "hardware/i2c.h"
#include "raspberry26x32.h"
#include "ssd1306_font.h"


#define HEIGHT              64
#define WIDTH               128
#define I2C_ADDR            0x3Cu
#define I2C_CLK             400 

// commands
#define CMD_MEM_MODE        0x20u
#define CMD_COL_ADDR        0x21u
#define CMD_PAGE_ADDR       0x22u
#define CMD_HORIZ_SCROLL    0x26u
#define CMD_SCROLL          0x2Eu
#define CMD_DISP_START_LINE 0x40u
#define CMD_CONTRAST        0x81u
#define CMD_CHARGE_PUMP     0x8Du
#define CMD_SEG_REMAP       0xA0u
#define CMD_ENTIRE_ON       0xA4u
#define CMD_ALL_ON          0xA5u

/*  Set the contrast of the display, accepts unsigned 8-bit number to
    select from 256 contrast steps. */
void set_contrast_control(uint8_t step)
{
    uint8_t cmd[] = {
        0x00u,  // control
        0x81u,  // command
        step,   // arg 

    };

    // send over i2c chan
}

void set_scroll(bool on)
{

}
