#include "main.h"



/**

 * print_triangle - check for a digit

 * @size: integer(size x size) type

 * Return: void

 */



void print_triangle(int size)
  
{
  
  int i, n, spaceX;
  

  
  if (size < 1)
    
    {
      
      _putchar('\n');
      
      return;
      
    }
  
  i = 0;
  
  spaceX = size - 1;
  
  while (i < size)
    
    {
      
      n = 0;
      
      while (n < size)
	
	_putchar((n++ < spaceX) ? ' ' : '#');
      
      _putchar('\n');
      
      spaceX--;
      
      i++;
      
    }
  
}
