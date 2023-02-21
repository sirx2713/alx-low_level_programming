#include "main.h"
/**
 * main - print _putchar
 * Return: 0
 */

int main(void)
{
	char abe[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(abe[c]);
	}
	_putchar('\n');
	return (0);
}
