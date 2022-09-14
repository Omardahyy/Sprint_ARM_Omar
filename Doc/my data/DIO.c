#include "tm4c123gh6pm.h"
#include "Bitwise_operations.h"
#include "std_types.h"
#include "DIO.h"


void DIO_init_portf()
{
SYSCTL_RCGCGPIO_R|=0x00000020;
while((SYSCTL_PRGPIO_R&0x20)==0){}
GPIO_PORTF_LOCK_R=0x04C4F434B;
GPIO_PORTF_CR_R=0X0E;
GPIO_PORTF_DIR_R=0X0E;
GPIO_PORTF_DEN_R=0X0E;

}

void DIO_WritePin(uint8 port,uint8 pin,uint8 value )
{
if (value==1)
{
  switch (port){
  
  case PORTA:
    Set_bit(GPIO_PORTA_DATA_R,pin);
  break;
  
  case PORTB:
    Set_bit(GPIO_PORTB_DATA_R,pin);
  break;
  
  case PORTC:
    Set_bit(GPIO_PORTC_DATA_R,pin);
  break;
  
  case PORTD:
    Set_bit(GPIO_PORTD_DATA_R,pin);
  break;
  
  case PORTE:
    Set_bit(GPIO_PORTE_DATA_R,pin);
  break;
  
  case PORTF:
    Set_bit(GPIO_PORTF_DATA_R,pin);
  break;
  
  }
  
}
else 
{
switch(port)
{

case PORTA:
    Clear_bit(GPIO_PORTA_DATA_R,pin);
  break;

case PORTB:
    Clear_bit(GPIO_PORTB_DATA_R,pin);
  break;

case PORTC:
    Clear_bit(GPIO_PORTC_DATA_R,pin);
  break;

case PORTD:
    Clear_bit(GPIO_PORTD_DATA_R,pin);
  break;

case PORTE:
    Clear_bit(GPIO_PORTE_DATA_R,pin);
  break;

case PORTF:
    Clear_bit(GPIO_PORTF_DATA_R,pin);
  break;
}

}

}

void DIO_WritePort(uint8 port,uint8 value )
{

  switch (port)
  {
  case PORTA :
    GPIO_PORTA_DATA_R=value;
  break ;   
  
  case PORTB :
    GPIO_PORTB_DATA_R=value;
  break ;  
  
  case PORTC :
    GPIO_PORTC_DATA_R=value;
  break ;  
  
  case PORTD :
    GPIO_PORTD_DATA_R=value;
  break ;  
  
  case PORTE :
    GPIO_PORTE_DATA_R=value;
  break ;  
  
  case PORTF :
    GPIO_PORTF_DATA_R=value;
  break ;  
  
  }


}





