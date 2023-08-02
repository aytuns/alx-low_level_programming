#include "main.h"

/**
 * is_palindrome - calls the palendrome recursion
 * _palendromeCheck -  checks if a string is a palindrome
 * @s: string to reverse
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 *
 *int main(void)
 *{
 *    int r;
 *
 *    r = is_palindrome("level");
 *    printf("%d\n", r);
 *    r = is_palindrome("redder");
 *    printf("%d\n", r);
 *    r = is_palindrome("test");
 *    printf("%d\n", r);
 *    r = is_palindrome("step on no pets");
 *    printf("%d\n", r);
 *   return (0);
 *}
 */

int _palendromeCheck(char *s, int i, int len)
{
	if (*s == 0)
		return (1);
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_palendromeCheck(s, i + 1, len - 1));
}

int _stringLenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _stringLenght(s + 1));
}

int is_palindrome(char *s)
{
	return (_palendromeCheck(s, 0, _stringLenght(s)));
}