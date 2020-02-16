#include <stdio.h>
#include <stdlib.h>

int happyNext(int n) 
    {  
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + ((n % 10) * (n % 10)); 
     n = (int) (n/10);
    }}
    
int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	int m = n;
	//TODO
	//add code below
	while (1){
		if ((n==4) || (n==1)) 
		{
			printf("yo");
			break;
		}
		else
		{
			n = happyNext(n);
			printf("hi");
		}
	}
	


	if(n==1) printf("%d is a happy number.\n", m);
	else printf("%d is NOT a happy number.\n", m);
	return 0;
}
