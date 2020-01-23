/*
 * Write a C program that reads two integers, a and b, from the standard input and computes a
b
. Write the code
using either a for loop, a while loop, or, if you’re feeling brave, recursively. The program should be able to properly
handle inputs as large as 264−1. The code should be written in a file called pow.c. Then, improve the Makefile created
for (2) to compile pow.c to an executable called pow.
An example session with pow is shown below:
$ ./pow
a: -4
b: 3
(-4)^(3)=-64
*/
/********************
 * 	pretty sure this is not what you were looking for, but definetely helped wiht practice
#include <stdio.h>
#include <math.h>
int main()
{
	
	double result, a, b;
	while (a != EOF | b != EOF)
	{
		printf("a: ");
		scanf("%lf", &a);

		printf("b: ");
		scanf("%lf", &b);

		result = pow(a, b);
		printf("%.2lf\n", result);
	}
}
***************************************************/

#include <stdio.h>
int main()
{
	int a, b, i; 
	long long power;
	printf("a: ");
        scanf("%d", &a);
	printf("b: ");
        scanf("%d", &b);
	power = 1;
	
	for (i = 0; i < b; i++)
		power =  a * power;
	printf("The power is %lld\n", power);
}


