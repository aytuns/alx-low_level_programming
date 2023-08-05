#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 * 
 * *int main(void)
*{
*    int r;
*
*	r = _isalpha('H');
*	putchar(r + '0');
*	r = _isalpha('o');
*	putchar(r + '0');
*	r = _isalpha(108);
*	putchar(r + '0');
*	r = _isalpha(';');
*	putchar(r + '0');
*	putchar('\n');
*	return (0);
*}
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

