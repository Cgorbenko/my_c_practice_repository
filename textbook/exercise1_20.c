/*Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter? */

#include <stdio.h>
#define MAXLINE 1000 /* the future maximum length of the upcoming sting*/
#define TABWIDTH 4 
int main()
{
	int index = 0;
	int c;
	int i = 0;
	char text[MAXLINE];
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			for(i; i = TABWIDTH - 1; ++i)
			{
				text[index] = ' ';
				++index;
			}
		else
		{	
			text[index] = c;
			++index;
		}
	}
	text[index] = '\0';
	printf("%s", text);

				


}

