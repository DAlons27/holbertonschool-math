#include "holberton.h"
#include <math.h>

/**
 * division - perform the division operation to complex numberss
 * @c1: first complex number
 * @c2: second complex number
 * @c3: quotient of complex numbers
 * Return: void
 */

void division(complex c1, complex c2, complex *c3)
{
	double a = c1.re;
	double b = c1.im;
	double p = c2.re;
	double q = c2.im;

	c3->re = ((a * p) + (b * q)) / (pow(p, 2) + pow(q, 2));
	c3->im = ((b * p) - (a * q)) / (pow(p, 2) + pow(q, 2));
}
