#include "tm4c123gh6pm.h"
#include "Bitwise_operations.h"
#include "std_types.h"
#include "DIO.h"

int main()
{
 DIO_init_portf();
 DIO_WritePort(PORTF,1 );
 DIO_WritePin(PORTF,2,1 );

  return 0;
}
