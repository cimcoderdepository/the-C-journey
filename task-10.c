#include <stdio.h>

#define CIRCLE(r) (PI * r * r)
#define PI 3.142

int main(void)
{
	double radius = 0;

	printf("Enter radius to find the area of a circle: ");
	scanf("%lf", &radius);
	printf("Area of circle is: %.4lf\n", CIRCLE(radius));
	return 0;
}
