/* 
 * Write a program to copy its input to its output, replacing each tab by \t, each
 * backspace by \b, and each backslash by \. This makes tabs and bckspaces visible in an 
 * unambiguous way. 
 */


/*

int main()
{
        int c;
        while ((c = getchar()) != EOF)
        {
                if (c == ' ')
                {
                        while ((c = getchar()) == ' ');
                        putchar(' ');
                        if (c == EOF) break;

                }
                putchar(c);
        }
}

*/


#include <stdio.h>
int main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
		{
			putchar(c);
		}
	}
}
