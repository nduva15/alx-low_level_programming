#include "main.h"



/**

 * print_alphabet-this prints a - z

 * Description: Write a function that prints the alphabet,

 * in lowercase, followed by a new line.

 * Return: Always 0.

 */



int print_alphabet(void)
  
{
  
  char c = 'a';
  

  
  while (c <= 'z')
    
    {
      
      _putchar(c);
      
      c++;
      
    }
  
  _putchar('\n');
  
  return (0);
  
}
