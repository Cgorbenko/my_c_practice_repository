#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int mgetline(char lin[], int maxline, int len);
int get_length(char strin[]);
void copy(char to[], char from[]);
/* print the longest input line */
int main(void)
{
        int len = 0; /* current line length */
        int max; /* maximum length seen so far */
	int size = 2; /* current space alloted for the maxline */
	
	char maxline[size]; /* longest line saved here */
	char * line =  (char *) malloc (sizeof(char) * size); /*current input line*/
	int why;

	max = 0;
        while (TRUE)
	{
		why = mgetline(line, size, len);
		if (!why)
		{
			char * w = (char *) malloc(sizeof(char) * size * 2); 
			for (int i =0; i < size; i++)
				w[i] = line[i]; //THIS LINE HAS NO USE. CHANGE IT
						//SHOULD i MAKE THIS INSTEAD BE A GETCHAR METHOD
						//SO i CAN INSERT THE CHARACTER INTO W[i]
			len = size; 
			size = size * 2;
			free(line);
			line = w;
		//So I know my error. But I'm not sure how or where it breaks. I think it's in 
		//the arrays, though. My code doesn't register that when it expands the size of an 
		//array it is still going to keep looking at the same line. So the first line is 
		//considered to have a length of 2. I'm not sure how to fix that yet, because I don't
		//understand the fucntion of the code for the for loop above this comment. 
		//After that I think I will have fixed the code for the most part at least.	
		}
		
		if (why == 5)
			break; 
		// I imagine that this is a bandaid? But I am not so sure

		if (why) // MY code breaks somewhere in this loop. If I print line it prints it
			// and never stops. I'm not sure what's wrong yet. 
		{
			printf("%s", line);
			len = get_length(line);
			if (len == 0)   // I put the why == 5, so this line is never reached. 
					// I am not sure what to do with this line to make it 
					//work, but that might be because of the other error that
					//I have with regards to it not registering the lines. 
				break;
			else if (len > max)
	       		{
				max = len;
				copy(maxline, line);
			}
		
			len = 0;

		}
	}
	free(line);
	
	if (max > 0) /* there was a line */
        	printf("%s", maxline);
}

/* getline: read a line into s, return length */
int mgetline(char s[],int lim, int i)
{
	//why is why true
	//when len is 0 why is true
        int c;
        for (i; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		
                s[i] = c;} // what is the point of this line? I don't return s[] ever, so
       				// so why even have it then? I change s[i] to make an array
				// but it seems kinda useless if I never return it. 	
        if (c == '\n') 
	{
                s[i] = c;
                s[++i]= 0;
		return 1;
        }
        if (c == EOF){
		return 5;}

	return 0;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
        int i;
        i = 0;
        while ((to[i] = from[i]) != '\0')
                ++i;
}
/* gets the length when the line is complete */
int get_length(char strin[])
{	
	int i;
	for(i = 0; strin[i] != '\0'; ++i); // why can't I declare i as an int here? If I do it breaks. when I try to cc it. 
	return i;
}
