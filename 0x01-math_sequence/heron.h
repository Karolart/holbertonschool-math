#ifndef HEAD_FILE
#define HEAD_FILE

#include <stdio.h>
#include <stdlib.h>
/**
 * struct cell -data struct
 *
 * @elt: number data parameter
 * @next:adress of next elem
 *
 * Description: struct to the linked list
 */
typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
