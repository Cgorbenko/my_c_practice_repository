#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int mgetline(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char revised[MAXLINE]; /* longest line saved here */
	max = 0;
	while ((len = mgetline(line, MAXLINE)) > 0)
		{
		copy(revised, line);
		printf("%s", revised);
		}
	return 0;
}
/* getline: read a line into s, return length */
int mgetline(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
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
	int y = 0;
	while ((to[i] = from[y]) != '\0')
	{
		if ((from[y] == '\t') || (from[y] == '\n')) 
			++y;
		else if ((from[y] == ' ') && (from[y + 1] == ' '))
			++y;
		else
		{
			to[i] = from[y];
			++i;
			++y;
		}
	}


}
