#include <stdio.h> 

 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
int conversion(int m);
int main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	while (fahr <= upper)
	{
		printf("%d\t%d\n", fahr, conversion(fahr));
		fahr = fahr + step;
	}
}
/* conversion:  conversion function */ 

int conversion(int fahr)
{	
	int celsius;
	celsius = 5 * (fahr - 32) / 9;
		
	return celsius;
}
