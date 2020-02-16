//In this assignment, we implement a function that simulates the outcome of tossing of 3 dice.
//We will learn how to generate random numbers, and how to seed a random number generator.
//For example, we use the following code to generate a random number between 1 and 6.
// rand() % 6 + 1
//The following code set the seed of the random number generator to 12345.
// srand(12345);

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//TO DO
//Implement a function named cum_prob below.
//This function takes an integer k, and a long integer trials as inputs.
//This function returns a double value.
//In the fucntion, we toss the 3 dice multiple times. The number of tosses is trials.
//We count the number of times that the outcomes of the 3 dice add up to at least k.
////And we then use this number and trials to calculate the probability that 
//the sum of the 3 dice is at least k.
//Finally, we return this probablity. 


double cum_prob(int k, long n)
{
	int die1, die2, die3;

	int i = 0;
	int total_high_outcomes = 0;

	// must return a double value, but not sure what exactly yet

	for (i; i < n; ++i)
	{
		die1 = rand() % 6 + 1;
		die2 = rand() % 6 + 1;
		die3 = rand() % 6 + 1;

		if (die1 + die2 + die3 >= k)
			total_high_outcomes += 1;

	}
	printf("%d\n", total_high_outcomes);
	return    1.0 * total_high_outcomes / n;
	



}


//Do not change the following code.
int main()
{
	long n = 10000000;
	int k;

	printf("Enter k :");	
	scanf("%d", &k);
	assert(k>= 3 && k<=18);
	srand(12345);
	printf("P(sum of the 3 dice is at least %d) = %.5lf\n", k, cum_prob(k, n));
	return 0;
}
