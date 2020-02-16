#include <stdio.h>

int main()
{
	double x;
	double total, average, times;
	
	total = 0;
	average = 0; 
	times = 0;

	while (scanf("%lf", &x) == 1)
	{
		total += x; 
		times++;
		average = total / times;
		printf("Total=%f Average=%f\n", total, average);
	}
}
	
