#include <stdio.h>
//#include <cstdlib.h>
//#include <iostream>
//#include <string>
//#include <cmath>
#include <stdlib.h>
int sum_of_even(int y);
int main(int argc, char *argv[])
{

	int n;	
	n = atoi(argv[1]);	
	sum_of_even(n);
}

int sum_of_even(int x)
{
	int first = 1;
	int current = 2;
	int fib_sum = 2;
	int even_sum = 0;
	int prime_sum = 0;
	int flag = 0;

	while (current < x)
	{
		if (current % 2 == 0)
			even_sum += current;
		for (int i =2; i < current; ++i)
		{
			if (current % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			prime_sum += current;
		flag = 0;
		fib_sum = current + first;
                first = current;
                current = fib_sum;
	}
	printf("even total = %d\n", even_sum);
	printf("prime total = %d\n", prime_sum);
	
			
}

