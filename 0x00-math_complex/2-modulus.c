#include "holberton.h"
#include <stdio.h>

/**
* double modulus(complex c)- returns the modulus of a given complex number
*@c: Complex Number
*
/

 double modulus(complex c)
{
        double modulo;

	modulo = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (modulo);
}
