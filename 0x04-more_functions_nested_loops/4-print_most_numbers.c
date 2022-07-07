#include "main.h"
/**
* print_most_numbers - prints the numbers
* Description: skips 2 & 4
* Returns: always void
*/
void print_most_numbers(void)  
{
int i = 48; /* ascii code: 0 */
while (i <= 57) /* ascii code: 9 */
{
if (i == 50 || i == 52) /* skip 2 & 4 */
{
i++;
continue;
}
_putchar(i++);      
}
_putchar('\n');  
}
