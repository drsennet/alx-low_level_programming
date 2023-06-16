#include <stdio.h>

int main(void)
{
	printf("#!/bin/bash.\n");
	printf("gcc -E $CFILE -o c.\n");
	return (0);
}
