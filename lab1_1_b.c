/* Question # 1
 * Write a C program that reads an integer n from the standard input and then sums integers from n to 2n if n is
non-negative, or from 2n to n if n is negative. Write the code in two versions, one using a for loop, and the other
using a while loop.

#include <stdio.h>

int main()
{
	int n, i, mult, sum;
	scanf("%d",&n);
	mult = 2 * n; 
	
	sum = 0;
	if (n >= 0)
	{
		for (i = n; i <= mult; i++)
			sum = sum + i;
	}
	else
	{
		for (i = mult; i <= n; i++)   //I don't understand why the sign is <= instead of >=????
			sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}
*/
#include <stdio.h>

int main()
{
	int n, sum, i, mult;
	sum = 0;
	scanf("%d", &n);
	mult = n * 2;
	if (n >= 0)
	{
		i = n;
		while (i <= mult)
		{
			sum = sum + i;
			i ++;
		}
	}
	else if (n < 0)
	{
		i = mult;
		while (i <= n)
		{
			sum = sum + i;
			i +=1;
		}
	}
	printf("%d\n", sum);
	return 0;
	
}


			
/****************************
 * Problem 2
 * 2. Write a Makefile that rebuilds your executables automatically when the ’C’ source code is modified. The exe-
cutables should be named sumItFor and sumItWhile. Note that both executables should prompt the user with the

string n: and obtain the value for n from the standard input. The result of the summation should be printed on the
standard output as sum: ... where the dots are replaced by the answer.
An example session with sumItFor is shown below:
$ ./sumItFor
n:20
sum: 630
*/

