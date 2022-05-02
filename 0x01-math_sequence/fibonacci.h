#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>

/**
* struct t_cell - struct
* @elt: int
* @next: pointer
*/

typedef struct cell
{
	int elt;
	struct cell *next;
} t_cell;

/* Prototypes */
t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
