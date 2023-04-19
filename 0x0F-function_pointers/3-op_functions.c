#include <stdio.h>
#include <stdlib.h>

/**
 * op_add- add
 *
 * @a: first number
 * @b: second number
 *
 * Return: Addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subtract
 *
 * @a: first number
 * @b: second number
 *
 * Return: Subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiply
 *
 * @a: first number
 * @b: second number
 *
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divide
 *
 * @a: first number
 * @b: second number
 *
 * Return: Division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod- modulo
 *
 * @a: first number
 * @b: second number
 *
 * Return: Modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
