#include "holberton.h"
#include <math.h>

/**
 * substraction - perform the substraction operation to complex number
 * @c1: first complex number
 * @c2: second complex number
 * @c3: subtraction of complex numbers
 * Return: void
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
