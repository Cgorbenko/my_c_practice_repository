/*Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number
of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When
either a tab or a single blank would suffice to reach a tab stop, which should be given
preference? */

#include <stdio.h>
#define SPACES 4
#define MAXLENGTH 1000
int main()
{
	int c;
	int counter = 0;
	int index = 0;
	char text[MAXLENGTH];
	while ((c = getchar()) != EOF)
	{
		if ((counter == SPACES) && (c != ' '))
		{
			text[index] = '\t';
			++index;
			counter = 0;
			text[index] = c;
		}
		else if ((counter == SPACES) && (c == ' ')) 
		{
			text[index] = '\t';
			++index;
			counter = 1;
		}	
		else if ((counter > 0) && (c != ' '))
		{
			for (int x = 0; x == counter - 1; ++ x)
			{
				text[index] = ' ';
				++index;
			}
			counter = 0;
		}

		else if (c = ' ')
			++counter;

		else
		{
			text[index] = c;
			++index;
		}
	}
	printf('%s', text);
}
		

