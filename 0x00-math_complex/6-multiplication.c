#include "holberton.h"
/**
 * void multiplication(complex c1, complex c2, complex *c3); - function that performs the multiplication
 * operation to complex numbers
 *
 * @c1: Parameter structure 1
 * @c2: Parameter structure 2
 * @c3: Parameter pointer to structure
 */
void multiplication(complex c1, complex c2, complex *c3)
{
  c3->re = (c1.re * c2.re) - (c1.im * c2.im);
  c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
