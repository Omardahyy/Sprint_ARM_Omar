#include "std_types.h"
#include "Bitwise_operations.h"
#include "tm4c123gh6pm.h"


#define PORTF           5
#define PORTE           4
#define PORTD           3
#define PORTC           2
#define PORTB           1
#define PORTA           0

#define PIN0    0
#define PIN1    1       
#define PIN2    2
#define PIN3    3
#define PIN4    4



void DIO_init_portf();

void DIO_WritePin(uint8 port,uint8 pin,uint8 value );
void DIO_WritePort(uint8 port,uint8 value );