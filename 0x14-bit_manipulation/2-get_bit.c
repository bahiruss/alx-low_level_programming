#include "main.h"

/**
* get_bit - returns the value of a bit at an index in a decimal number
*
* @n: It is a number to search
*
* @index: It is an index of the bit
*
* Return: Is value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)

{
int bit_value;

if (index > 63)
return (-1);

bit_value = (n >> index) & 1;
return (bit_value);
}
