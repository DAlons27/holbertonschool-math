#include "holberton.h"
#include <math.h>

/**
 * argument - retur the argumen of a given complex number
 * @c: structure of a complex number
 * Return: arg
 */

double argument(complex c)
{
	double arg;

	arg = atan(c.im / c.re);
	return (arg);
}
