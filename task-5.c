#include <stdio.h>
/**
*
* main - a program to perform all arithmetic operation.
* Return: 0 at success
*/

int main(void)
{
	int a = 0, b = 0;

	int add, sub, mul, div, mod;

	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	add = a + b;
	printf("Addition: %d + %d = %d\n", a, b, add);

	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	sub = a - b;
	printf("Subtraction: %d - %d = %d\n", a, b, sub);

	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	mul = a * b;
	printf("Multiplication: %d * %d = %d\n", a, b, mul);

	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	div = a / b;
	printf("Division: %d / %d = %d\n", a, b, div);

	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	mod = a % b;
	printf("Remainder: %d %% %d = %d\n", a, b, mod);

	return (0);
}
