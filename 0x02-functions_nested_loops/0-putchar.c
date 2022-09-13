#include putchar.h"

/**
 * main - prints Putchar
 *
 * Description: prints Putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for(i = 0; i <= 7; i++);
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
