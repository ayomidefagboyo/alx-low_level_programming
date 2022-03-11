#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * int main -will assign a random number to the variable n
 * @arg1: First operand
 * @arg2: Second operand
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;
if(d > 5)
{
printf ("Last digit of %n is %n and is greater than 5\n", n, d);
}
else if(d == 0)
{
printf ("Last digit of %n is %n and is 0\n", n,d);
}
else if(d < 6)
{
printf ("Last digit of %n is %n and is less than 6 and not 0\n", n,d);
}
	return (0);
}
