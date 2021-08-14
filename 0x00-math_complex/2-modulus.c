#include "holberton.h"
#include <math.h>

/**
 * modulus - return the modulus of a given complex number
 * @c: structure of a complex number
 * Return: c
 */

double modulus(complex c)
{
	double mod;

	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (mod);
}
