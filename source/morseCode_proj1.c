
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL46Z4.h"
#include "fsl_debug_console.h"

void delay_ms(unsigned short delay_t)
{
	SIM->SCGC6 |= (1 << 24);
	SIM->SOPT2 |= (0x2 << 24);
	TPM0->CONF |= (0x1 << 17);
	TPM0->SC = (1 << 7) | (0x7);

	TPM0->MOD = delay_t*62 + delay_t/2 -1;

	TPM0->SC |= 0x01 << 3;

	while(!(TPM0->SC & 0x80)){}
	return;

}

void dot(void);
void dash(void);
void pause(void);
void blank(void);
void endofLetter(void);
/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */

/*
 * @brief   Application entry point.
 */
int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

      //SIM->SCGC5 |= 1<<13;
      SIM->SCGC5 |= 1<<12;

      //PORTE->PCR[29] &= ~(0x700 << 8);
      PORTD->PCR[5] &= ~(0X700 << 8);
      //PORTE->PCR[29] |= 0x700 & (1 << 8);
      PORTD->PCR[5] |= 0X700 & (1 << 8);
      //GPIOE->PDDR |= (1 << 29);
      GPIOD->PDDR |= (1 << 5);
    PRINTF("Hello World\n");

	char *message1 = "hello";
	int length1 = strlen(message1);

	char *message2 = "sos 123";
	int length2 = strlen(message2);

	void displayMorse(char *m, int length)
	{

		for (int i = 0; i < length; i++)
		{
			if (toupper(m[i]) == 'A')
			{
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'B')
			{
				dash();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				endofLetter();

			}
			else if (toupper(m[i]) == 'C')
			{
				dash();
				pause();
				dot();
				pause();
				dash();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'D')
			{
				dash();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'E')
			{
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'F')
			{
				dot();
				pause();
				dot();
				pause();
				dash();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'G')
			{
				dash();
				pause();
				dash();
				pause();
				dot();
				pause();
				endofLetter();
			}
			else if (toupper(m[i]) == 'H')
			{
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'I')
			{
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'J')
			{
				dot();
				pause();
				dash();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'K')
			{
				dash();
				pause();
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'L')
			{
				dot();
				pause();
				dash();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'M')
			{
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'N')
			{
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'O')
			{
				dash();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'P')
			{
				dot();
				pause();
				dash();
				pause();
				dash();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'Q')
			{
				dash();
				pause();
				dash();
				pause();
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'R')
			{
				dot();
				pause();
				dash();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'S')
			{
				dot();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (toupper(m[i]) == 'T')
			{
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'U')
			{
				dot();
				pause();
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'V')
			{
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'W')
			{
				dot();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'X')
			{
				dash();
				pause();
				dot();
				pause();
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'Y')
			{
				dash();
				pause();
				dot();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (toupper(m[i]) == 'Z')
			{
				dash();
				pause();
				dash();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (m[i] == '0')
			{
				dash();
				pause();
				dash();
				pause();
				dash();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (m[i] == '1')
			{
				dot();
				pause();
				dash();
				pause();
				dash();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (m[i] == '2')
			{
				dot();
				pause();
				dot();
				pause();
				dash();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (m[i] == '3')
			{
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dash();
				pause();
				dash();
				endofLetter();
			}
			else if (m[i] == '4')
			{
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dash();
				endofLetter();
			}
			else if (m[i] == '5')
			{
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (m[i] == '6')
			{
				dash();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (m[i] == '7')
			{
				dash();
				pause();
				dash();
				pause();
				dot();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (m[i] == '8')
			{
				dash();
				pause();
				dash();
				pause();
				dash();
				pause();
				dot();
				pause();
				dot();
				endofLetter();
			}
			else if (m[i] == '9')
			{
				dash();
				pause();
				dash();
				pause();
				dash();
				pause();
				dash();
				pause();
				dot();
				endofLetter();
			}
			else if (m[i] == ' ')
			{
				blank();
			}
			else
			{

				return;
			}

		}
	}

	displayMorse(message1, length1);
	displayMorse(message2, length2);

    while(1) {

    }
    return 0 ;
}





void dot()
{
	GPIOD->PDOR &= ~(1 << 5);
	delay_ms(250);
	GPIOD->PDOR |= (1 << 5);

}

void dash()
{
	GPIOD->PDOR &= ~(1 << 5);
	delay_ms(750);
	GPIOD->PDOR |= (1 << 5);
}

void pause()
{
	delay_ms(250);

}

void endofLetter()
{
	delay_ms(750);
}

void blank()
{
	delay_ms(100);
}
