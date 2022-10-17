#include "STD_TYPES.h"
#include "DIO.h"


#define LED1_PIN	DIO_u8_PIN0
#define LED2_PIN	DIO_u8_PIN1
#define LED3_PIN	DIO_u8_PIN5
#define LEDS_PORT	DIO_u8_PORTA


int main(void){
  DIO_enuSetPortDirection(LEDS_PORT, 0b00100111);

	DIO_enuSetPinDirection(DIO_u8_PORTD, DIO_u8_PIN0, DIO_u8_INPUT);
	DIO_enuSetPinDirection(DIO_u8_PORTD, DIO_u8_PIN1, DIO_u8_OUTPUT);
	UART_voidInit();

	while(1){
		u8 Local_u8ReturnedData = UART_voidGetChar();
		switch(Local_u8ReturnedData){
		case '1':
			DIO_enuSetPinValue(LEDS_PORT, LED1_PIN, DIO_u8_HIGH);
			break;
		case '2':
			DIO_enuSetPinValue(LEDS_PORT, LED2_PIN, DIO_u8_HIGH);
			break;
		case '3':
			DIO_enuSetPinValue(LEDS_PORT, LED3_PIN, DIO_u8_HIGH);
			break;
		default:
			DIO_enuSetPortValue(LEDS_PORT, DIO_u8_PORT_INPUT);
			break;
		}
	}
}
