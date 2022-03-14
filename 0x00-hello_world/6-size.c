#include <stdio.h>
/**
 * main - funtion that prints combinations of single-digit numbers.
 * section header: Section description)*
 * Return:0 Description of the returned value
 */
int main(void)
{
int intType;
float floatType;
long  longType;
long long lType;
char charType;
	
    /* sizeof evaluates the size of a variable*/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
printf("Size of a long int: %zu bytes(s)\n", sizeof(longType));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(lType));
printf("Size of a float: %zu bytes(s)\n", sizeof(floatType));
return (0);
}

