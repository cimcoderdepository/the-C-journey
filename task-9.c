#include <stdio.h>
#define FAHRENHEIT(x) x * 89.6 / 32
 
int main(void)
{
	int var = 0;


	printf("Enter temp. in Degree Celsius: ");
	scanf("%i", &var);
	printf("\n\n");
	printf("---------Temperature----------\n");
	printf("|   Celsius   |  Fahrenheit  |\n");
	printf("|-------------|--------------|\n");
	printf("|     %i      |     %.1lf    |\n", var, FAHRENHEIT(var));
	printf("------------------------------\n");
	printf("\n%i Degree Celsius = %.1lf\n", var, FAHRENHEIT(var));
	return 0;
}
