/*
 * File: 1-last_digit.c
 * Author: Mamudu Hamidu <drsennet@gmail.com>
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints last digitiof numbers.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d  and is less than  %d and not %d\n",
				n, n % 10, 6, 0);
	}
	else
	{
		 printf("Last digit of %d is %d and is %d\n", n, n % 10, 0);
	}
	return (0);
}
