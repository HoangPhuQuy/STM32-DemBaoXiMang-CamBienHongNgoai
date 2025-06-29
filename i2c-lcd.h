#ifndef __I2C_LCD_H__
#define __I2C_LCD_H__

#include "stm32f1xx_hal.h"

void lcd_init(void);
void lcd_send_cmd(char cmd);
void lcd_send_data(char data);
void lcd_send_string(char *str);
void lcd_clear(void);
void lcd_goto_XY(uint8_t row, uint8_t col);

extern I2C_HandleTypeDef hi2c1;

#endif
