/*
 * File: 7-print_tebahpla.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse,
 *		using putchar.
 *
 * Return: Always 0.
*/
int main(void)
{
	char ch;

	/*print lowercase alphabets*/
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
