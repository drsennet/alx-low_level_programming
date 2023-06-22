/*
 * File: 4-print_alphabt.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 *		except e and q using putchar.
 *
 * Return: Always 0.
*/
int main(void)
{
	char ch;

	/*print lowercase alphabets*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
