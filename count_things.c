/* program to count blanks, tabs, and newlines*/

#include <stdio.h>
int main()
{
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nl;
		if (c == '\t')
			++nl;
		if (c == '\n')
			++nl;
	}
	printf("the amount of blanks, tabs, and newlines is %d\n", nl);
	return 0;
}

