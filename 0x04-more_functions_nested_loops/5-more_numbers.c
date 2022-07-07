#include "main.h"
/**
* more_numbers - prints 10 times the numbers from 0 t0 14
* Description: prints 10 times the numbers from 0-14, followed by a new line.
* Return: always void
*/
void more_numbers(void) 
{
int h, i;
for (h = 0; h <= 9; h++)    
{
for (i = 0; i <= 14; i++)	
{
if (i > 9) 
{
_putchar((i / 10) + '0');	      
}
_putchar((i % 10) + '0');
}
_putchar('\n');      
}  
}
