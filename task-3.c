#include <stdio.h>

/**
 * main - a program that swap values of two variables.
 *
 * Return: 0 at success.
 */

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("What would you like your first value to be: ");
	scanf("%d", &a);	/* takes input from user */

	printf("and what would you like the second to be as well: ");
	scanf("%d", &b);	/* takes input from user */

	c = a;	/* 'c' is helping us to store a copy of 'a' */

	printf("Your swap value is as follow\n");
	printf("a: %d, b: %d\n", a, b);	/* original values of 'a' & 'b' */
					/* respectively during the swap, 'a' */
					/* losses its original value to 'b' */

	printf("a: %d, b: %d\n", b, c);	/* 'b' takes its new value from 'c' */
					/* which held a copy of 'a' previously*/
	return (0);
}
