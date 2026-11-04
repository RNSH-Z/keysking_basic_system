#include "bsp_system.h"


/**
 * @brief  串口重定向：将 printf 的输出重定向到 USART1
 * @note   Keil MDK AC5 + MicroLib 环境（本工程已开启 MicroLib）
 */
int fputc(int ch, FILE *f)
{
    HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, HAL_MAX_DELAY);
    return ch;
}



void task_init()
{
}


void main_task()
{

    printf("hello\r\n");
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
    HAL_Delay(1000);
}
