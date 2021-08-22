#ifndef _FINONACCI_H_
#define _FINONACCI_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

/**
 * struct t_series - list of result in each iteration of Heron sqrt
 * @elt: Result of the application of the serie
 * @next: point to the next node
 */
typedef struct t_series
{
int elt;
struct t_series *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif /* _FINONACCI_H_ */
