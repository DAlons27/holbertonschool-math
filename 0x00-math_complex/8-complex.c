#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg  - update the real and the imaginary
 * @m: modulus
 * @arg: argument
 * @c3: complex number
 * Return: void
 */

void complex_from_mod_arg (double m, double arg, complex *c3)
{
	double d;
	double a;
	double b;

	d = tan(arg);
	a = sqrt(pow(m, 2) / (1 + pow(d, 2)));
	b = d * a;
	c3->re = a;
	c3->im = b;
}
