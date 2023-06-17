/*
 * File: 6-size.c
 * Auth: Mamudu Hamidu <drsennet@gmail.com>
*/
#include <stdio.h>
/**
 *main - C program that prints the size of various types on the
 *		computer it is compiled and run on
 *
 *Return: Always 0.
 */
int main(void)
{
	/* wrtiting to stdout*/
	puts("Size of a char:%zu byte(s)\n", sizeof(char));
	puts("Size of an int:%zu byte(s)\n", sizeof(int);
	puts("Size of a long int: %zu byte(s)\n", sizeof(long int);
	puts("Size of a long long int:%zu byte(s)\n", sizeof(long long int));
	puts("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
