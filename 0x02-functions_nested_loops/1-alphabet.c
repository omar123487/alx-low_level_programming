#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet set in small letters
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char xyz = 'a';

	while (xyz <= 'z')
	{
		_putchar (xyz);
		xyz++;
	}
	_putchar ('\n');
}
