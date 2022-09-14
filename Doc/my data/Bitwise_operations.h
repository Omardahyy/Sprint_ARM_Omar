

/* Set a certain bit in any register */
#define Set_bit(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define Clear_bit(REG,BIT) (REG&=(1<<BIT)

/* Toggle a certain bit in any register */
#define Toggle_bit(REG,BIT) (REG^=(1<<BIT))

/* return value of a bit in register */
#define Get_bit(REG,BIT) (REG&(1<<BIT))