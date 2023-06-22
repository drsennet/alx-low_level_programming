/*
 * File: 0-positive_or_negative.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints 0-positive_or_negative
 *	using if elseif else.
 *
 * Return: Always 0.
*/
int main(void)
{
	/* Declare variable.*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		/* Write stdio for n as positive*/
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		/* Write stdio for n as negative tive*/
		printf("%d is negative\n", n);
	}
	else
	{
		/* if none*/
		printf("%d is zero\n", n);
	}
	/* Return 0.*/
	return (0);
}
