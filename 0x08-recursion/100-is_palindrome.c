#include "main.h"
/**
 * rec - compares string vs string reverse.
 * @s: string
 * @x: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int rec(char *s, int x)
{
	if (*s != *(s + x))
		return (0);
	else if (*s == 0)
		return (1);
	return (rec(s + 1, x - 2));
}

/**
 * count_str - obtains length of x
 * @s: string.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int count_str(char *s)
{
	if (*s != '\0')
	{
		return (1 + count_str(s + 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is,
 * a palindrome and 0 if not.
 * @s: string.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int x = count_str(s);

	return (rec(s, (x - 1)));
}
