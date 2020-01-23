/*
int main()
{
        int c,  nl, nw, nc, state;

        state = OUT;
        nl = nw = nc = 0;
        while ((c = getchar()) != EOF)
        {
                ++nc;
                if (c == '\n')
                        ++nl;
                if (c == ' ' || c == '\n' || c == '\t')
                        state = OUT;
                else if (state == OUT)
                {
                        state = IN;
                        ++nw;
                }
        }
        printf("%d %d %d\n", nl, nw, nc);
}
*/


/* write a program that prints its input one word per line*/

#include <stdio.h>
int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' '|| c == '\n' || c == '\t')
		{
			putchar('\n');
		}
		else
		{
			putchar(c);
		}
	}
}                                                                                                         
