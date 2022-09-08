#include <stdio.h>

/**
 *  main - prints the string in the put function
 *
 *  Discription: using the main function
 *  this program prints "Programming is like building a multilingual puzzle
 *  Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of an long int: %1d byte(s)\n", sizeof(li));
	printf("Size of an long long int: %1d byte(s)\n", sizeof(lli));
	printf("Size of a float: %1d byte(s)\n", sizeof(f));
	return (0);
}
