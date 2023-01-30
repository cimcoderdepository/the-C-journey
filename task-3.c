#include <stdio.h>

/**
 * main - a program that swap values of two variables.
 *
 * Return: 0 at success.
 */

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("Enter first value: ");
	scanf("%d", &a);

	printf("Enter second value: ");
	scanf("%d", &b);

	c = a;

	printf("a: %d, b: %d\n", a, b);
	printf("a: %d, b: %d\n", b, c);
	return (0);
}
