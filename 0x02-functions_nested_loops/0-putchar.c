#include "main.h"

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

	for (i = 0; i <= 7; i++);
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
