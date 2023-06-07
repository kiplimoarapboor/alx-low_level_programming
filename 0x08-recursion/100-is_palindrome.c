#include <string.h>

int helper(char *s, int start, int end);

/**
 * is_palindrome- checks if string is palindrome
 *
 * @s: the string
 *
 * Return: 1 if it is, 0 otherwise
 */

int is_palindrome(char *s)
{
	return (helper(s, 0, strlen(s) - 1));
}

/**
 * helper- checks if string is palindrome
 *
 * @s: the string
 *
 * @start: the begining
 * @end: the end of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (helper(s, start + 1, end - 1));
}
