#include <stdio.h>
#define METER 0.3048
#define SQUARE(x) x * x 
int main(void)
{
	float feet = 0;

	printf("enter Feet measurement: ");
	scanf("%e", &feet);
	printf("\n%f foot = %f meter\n", feet, feet * METER);
	printf("\nthe foot square is: %f\n", SQUARE(feet));
	return 0;
}
