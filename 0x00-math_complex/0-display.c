#include "holberton.h"

/**
 * display_complex_number - mostrar el numero complejo
 *
 * @c: estructura compleja
 */
void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
		return;
	if (c.re != 0)
		printf("%g", c.re);
	if (c.re != 0 && c.im > 0)
		printf(" + ");
	else if (c.re != 0 && c.im < 0)
		printf(" - ");
	if (c.im > 0)
		printf("%gi", c.im);
	else if (c.im < 0)
		printf("%gi", c.im * -1);
	printf("\n");
}
