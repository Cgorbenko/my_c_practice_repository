/* Question # 1
 * Write a C program that reads an integer n from the standard input and then sums integers from n to 2n if n is
non-negative, or from 2n to n if n is negative. Write the code in two versions, one using a for loop, and the other
using a while loop.
*/
#include <stdio.h>

int main()
{
        int n, i, mult, sum;
        scanf("%d",&n);
        mult = 2 * n; 
        
        sum = 0;
        if (n >= 0)
        {
                for (i = n; i <= mult; i++)
                        sum = sum + i;
        }
        else
        {
                for (i = mult; i <= n; i++)   
                        sum = sum + i;
        }
        printf("%d\n", sum);
        return 0;
}


