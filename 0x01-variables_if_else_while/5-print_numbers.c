/*
 * File: 5-print_numbers.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>

/**
 * main - a program that prints all single
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
		printf("%d", i);

	}
	printf("\n");
	return (0);
}
