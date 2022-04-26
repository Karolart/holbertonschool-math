#include "main.h"
#include <stdio.h>

/**
 * display_complex_number - Prints the representation of a complex number
 *
 * @c: complex number
 * Return: Void
 */

void display_complex_number(complex c)
{
  printf("%.9g", c.re);
  if (c.im)
    {
      if (c.im > 0)
	{
	  printf(" + ");
	}
      else
	{
	  printf(" - ");
	  c.im *= -1;
	}
      if (c.im != 1 && c.im != -1)
	printf("%.9g", c.im);
      printf("i");
    }
  printf("\n");
}
