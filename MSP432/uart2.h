//uart0..3 on eUSCI_A0..3 for MSP430

#ifndef UART2_H_
#define UART2_H_

#include "gpio.h"								//we use gpio

//hardware configuration
//initialize uart pins
//comment out if not used
//TX/P2.5, RX/P2.6
#define UART2_TX()			do {IO_OUT(PORT2, 1<<5); IO_AF2(PORT2, 1<<5);} while (0)
//#define UART2_RX()			do {IO_IN (PORT2, 1<<6); IO_AF2(PORT2, 1<<6);} while (0)

#define F_UART				(F_CPU)				//F_UART(F_BRCLK = F_CPU)
//end hardware configuration

//EUSCI_A configuration


//uart0/eUSCI_A0: TX/p2.0 and RX/p2.1
void uart2_init(uint32_t bps);
char uart2_get(void);
void uart2_put(char ch);
void uart2_puts(char *str);
char uart2_busy(void);
char uart2_available(void);

#endif /* UART_H_ */
