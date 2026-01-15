#ifndef __USARTx_H
#define	__USARTx_H

#include "stm32l4xx.h"
#include <stdio.h>

//引脚定义
/**USART1 GPIO Configuration    
   PA2     ------> USART1_TX
   PA3     ------> USART1_RX 
*/
/*******************************************************/
#define UARTx                             USART2
#define UARTx_CLK_ENABLE()                __USART2_CLK_ENABLE();

#define RCC_PERIPHCLK_UARTx               RCC_PERIPHCLK_USART2
#define RCC_UARTxCLKSOURCE_SYSCLK         RCC_USART2CLKSOURCE_SYSCLK

#define UARTx_RX_GPIO_PORT                GPIOA
#define UARTx_RX_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOA_CLK_ENABLE()
#define UARTx_RX_PIN                      GPIO_PIN_3
#define UARTx_RX_AF                       GPIO_AF7_USART2


#define UARTx_TX_GPIO_PORT                GPIOA
#define UARTx_TX_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOA_CLK_ENABLE()
#define UARTx_TX_PIN                      GPIO_PIN_2
#define UARTx_TX_AF                       GPIO_AF7_USART2

#define UARTx_IRQHandler                  USART2_IRQHandler
#define UARTx_IRQ                 		    USART2_IRQn
/************************************************************/


//串口波特率
#define UARTx_BAUDRATE                    115200

// 添加调试宏定义
#define DEBUG_PRINT_ENABLE 1  // 启用调试打印

#if DEBUG_PRINT_ENABLE
#define DEBUG_PRINT(fmt, ...) printf("[DEBUG] %s:%d: " fmt "\r\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DEBUG_PRINT(fmt, ...)
#endif



void UARTx_Config(void);
//int fputc(int ch, FILE *f);
extern UART_HandleTypeDef UartHandle;
#endif /* __USART1_H */
