#include "holberton.h"
/**
 * conjugate - funcion que devuelve retorno
 * @c: numero complejo
 * return : numero conjugado
 */

complex conjugate(complex c)
{

	if (c.im > 0)
	{
		c.im = -c.im;
	}
	else if (c.im < 0)
	{
		c.im = -c.im;
	}
	return (c);
}
