/*
 * gpio_toggle.c
 *
 *  Created on: Dec 26, 2019
 *      Author: calebkang
 */
#include "main.h"
#include "dma.h"
#include "quadspi.h"
#include "gpio.h"

void GpioToggleEx(void)
{
  for(int i=0; i<10; i++)
  {
    HAL_GPIO_TogglePin(LED1_GPIO_PORT, LED1_PIN);
    /* Insert delay 200 ms */
    HAL_Delay(10);
  }
}
