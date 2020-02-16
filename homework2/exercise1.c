#include <stdio.h>
#include <stdlib.h>
double power(double y, int k);
int main(int args, char* argv[])
{
	double x = atof(argv[1]);
	int n = atoi(argv[2]);
	printf("answer = %f\n", power(x, n));

}

double power(double x, int n)
{

        if (n == 0)
                return 1;
        else if (n % 2 == 0)
                return power(x, n/2) * power(x, n/2);
	else
		return 1.0* x * power(x, n/2) * power(x, n/2);


}
