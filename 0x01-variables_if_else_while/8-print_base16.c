/*
 * File: i7-print_base16.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>

/**
 * main -  a program that prints all the numbers of base 16 in lowercase,
 *		using putchar.
 *
 * Return: Always 0.
*/
int main(void)
{
	char ch;
	int i;

	/*print lowercase alphabets*/
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');

	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
