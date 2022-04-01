#include <stdio.h>
/**
*main - prints name of function 
*
*using argv[] 
*return 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n",argv[i]);
}
