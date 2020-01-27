/* Histogram of Frequency characters */ 
/*
#include <stdio.h>
#define TNOCHAR 128 //the total number of characters is 128: 0 - 127

int main()
{
	int c, i, j;
	int character[TNOCHAR];

	for (i=0; i<TNOCHAR; ++i)
		character[i] = 0;

	while ((c=getchar()) != EOF)
		++character[c];

	for (i=0; i<TNOCHAR; ++i)
	{
		putchar(i);

		for (j=0;j<character[i];++j)
			putchar('*');

		putchar('\n');
	}
	return 0;
}
*/

#include <stdio.h>
#define TNOCHAR 128 // total # of characters

int main()
{
	int c, i, j;

	int character[TNOCHAR];

	for (i=0;i<TNOCHAR;++i)
		character[i] = 0;

	while ((c = getchar()) != EOF)
		++character[c];

	for (i = 0; i<TNOCHAR; ++i)
	{
		putchar(i);

		for (j=0;j<character[i];++j)
			putchar('*');

		putchar('\n');
	}
	return 0;
}
