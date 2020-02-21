#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int mgetline(char line[], int maxline);
/* print the longest input line */
int main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */
	max = 0;
	while ((len = mgetline(line, MAXLINE)) > 0)
		if (len > 10) 
		{
			printf("%s", line);	
		}
	return 0;
} 
/* getline: read a line into s, return length */
int mgetline(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') 
	{
	s[i] = c;
	++i;
	}
	s[i] = '\0';
	return i;
}
