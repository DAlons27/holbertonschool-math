#ifndef _HERON_
#define _HERON_
#include <stdlib.h>

typedef struct t_cell
{
	long double elt;
	struct t_cell *next;
} t_cell;
t_cell *heron(double p, double x0);
#endif
