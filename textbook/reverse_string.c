#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int mgetline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */
	char reversed[MAXLINE]; /* longest line saved here */
	while ((len = mgetline(line, MAXLINE)) > 0)
	{
		copy(reversed, line);
		printf("%s", reversed);
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
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i = 0;
	int x = 0;
	while (from[i] != '\0')
		++i;

	while (i != 0)
	{
		
		to[x] = from[i-1];
		--i;
		++x;
	}
	to[x] = '\0';
}
