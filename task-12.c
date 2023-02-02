#include <stdio.h>

#define REC(a,b) (a * b)

int main(void)
{
	float length = 0, breadth = 0;

	printf("Enter length of rectangle: ");
	scanf("%f", &length);
	printf("Enter breadth of rectangle: ");
	scanf("%f", &breadth);
	
	printf("\nArea of rectangle: %.1f * %.1f = %.1fcm\n", length, breadth, REC(length,breadth));
	return 0;
}
