#include <stdio.h>

int steps(int m);

int main()
{
	int a, b, i;
	printf("bounds:");
	scanf("%d%d", &a, &b);
	
	int max_steps = 0, max_step_index = 0;  
	
	for(i=a; i<=b; ++i)
	{
		if (steps(i) > max_steps)
		{
			max_steps = steps(i);
			max_step_index = i;
		}
	}
	printf("max step for %d is: %d\n",  max_step_index, max_steps);
}



int steps(int x)
{
	int count = 0;
	while (x != 1){
	if (x % 2 == 0) x= x/2;
	else x = 3*x + 1;
	count++;


}
return count;

}


/*
int steps(int x)
	//calculates the steps and how many 
{ 


	if (x ==1)
		return 0;
	else if (x % 2 ==0)
		return 1 + (steps (x/2));
	else
		return 1 + (steps (3*x +1));
}
*/

