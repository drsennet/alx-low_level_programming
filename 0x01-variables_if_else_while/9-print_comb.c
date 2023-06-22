/*
 * File: 9-print_com.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>

/**
 * main - Write a program that prints all possible,
 *		combinations of single-digit numbers using putchar.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i;

	/*print*/
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
