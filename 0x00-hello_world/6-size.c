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
	/* intializing inputs thus write*/
	char str1[] = "Size of a char: 1 byte(s)";
	char str2[] = "Size of an int: 4 byte(s)";
	char str3[] = "Size of a long int: 4 byte(s)";
	char str4[] = "Size of a long long int: 8 byte(s)";
	char str5[] = "Size of a float: 4 byte(s)";

	/* wrtiting to stdout*/
	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);
	puts(str5);
	return (0);
}
