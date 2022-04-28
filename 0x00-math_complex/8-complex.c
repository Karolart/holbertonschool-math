#include "holberton.h"
#include <stdio.h>

/**
 * void complex_from_mod_arg (double m, double arg, complex *c3) -  update the real and the imaginary parts of a complex number given its modulus and arguments 
*@c: Complex Number
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
  c3->re = m * cos(arg);
  c3->im = m * sin(arg);
}

