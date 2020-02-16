#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("n = "); 
	scanf("%d", &n); 

	int m = n; 

	if(n==1) printf("%d is a happy number.\n", m);
	else printf("%d is a NOT a happy number.\n", m);
	return 0;
}
