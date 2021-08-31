#include "main.h"
/**
 *print_alphabet - Prints the alphabet,in lower case
 *Description: lower case
 *Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
