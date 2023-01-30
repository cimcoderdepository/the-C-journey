#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, add_num = 0;

	printf("Enter first integer: ");
	scanf("%d", &num1);

	printf("Enter second integer: ");
	scanf("%d", &num2);

	add_num = num1 + num2;

	printf("Addition of %d and %d is: %d\n", num1, num2, add_num);
	return (0);
}
