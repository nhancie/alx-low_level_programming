#include "main.h"
#include <stdio.h>

/**
  5  * print_rev - prints string backwards
  6  * @s: string
  7  * Return: void
  8  */
  9
 10 void print_rev(char *s)
 11 {
 12         int i = 0;
 13
 14         while (s[i] != '\0')
 15         {
 16                 i++;
 17         }
 18         i--;
 19         while (i >= 0)
 20         {
 21                 _putchar(s[i]);
 22                 i--;
 23         }
 24         _putchar('\n');
 25 }
