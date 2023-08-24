#include "main.h"

/**
 * _strncat - Concatenate two strings, using at most n bytes from src.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
    char *dest_ptr = dest;

    while (*dest_ptr != '\0')
    {
        dest_ptr++;
    }

    while (*src != '\0' && n > 0)
    {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
        n--;
    }

    *dest_ptr = '\0';

    return dest;
}
