#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = malloc(5 *sizeof(int));

	if (p == NULL)
	{
		perror("not enough memory");
		exit(1);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("&p = %p\n", &p[i]);
		printf("p[i] = %d\n", p[i]);
	}
	return 0;
}
