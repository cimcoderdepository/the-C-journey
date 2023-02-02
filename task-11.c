#include <stdio.h>

#define SQUARE(l) l * l

int main(void)
{
	float length = 0;

	printf("Enter value to find the area of a square: ");
	scanf("%f", &length);
	printf("\nArea of square is: %.2fcm\n", SQUARE(length));
	return 0;
}
