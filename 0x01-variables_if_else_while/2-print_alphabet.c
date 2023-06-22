/*
 * File: 2-print_alphabet.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 *		using putchar.
 *
 * Return: Always 0.
*/
int main(void)
{
	char ch;

	/*print lowercase alphabets*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

		putchar('\n');
	}
	return (0);
}
