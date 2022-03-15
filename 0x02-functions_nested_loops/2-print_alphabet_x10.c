#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: A function that prints the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
char alphabet = 'a';
for (i = 0;i < 10;i++ )
{
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;

}
_putchar('\n');
}
}
