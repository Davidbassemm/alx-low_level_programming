#include "main.h"

/**

puts2 - function should print only one character out of two

starting with the first one

@str: input

Return: none
*/
void puts2(char *str)
{
int length = 0;
int i;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Print every other character */
for (i = 0; i < length; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
