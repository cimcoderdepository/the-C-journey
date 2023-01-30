#include <stdio.h>
/**
* main - a program that multiply two floating point numbers.
*
* Return: 0 at success.
*/
int main(void)
{
	float a = 0, b = 0, mul = 0;

	printf("Enter first value: ");
	scanf("%f", &a);

	printf("Enter second value: ");
	scanf("%f", &b);

	mul = a * b;

	printf("%f multiply %f is: %f\n", a, b, mul);

	return (0);
}
