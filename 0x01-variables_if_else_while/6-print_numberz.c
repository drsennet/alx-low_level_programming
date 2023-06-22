/*
 * File: 6-print_numberz.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>

/**
 * main - a program that prints(putchar) all single
 *	digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
*/
int main(void)
{
	int i;

	/*print single digit numbers of base 10 starting from 0*/
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');

	}
	putchar('\n');
	return (0);
}
