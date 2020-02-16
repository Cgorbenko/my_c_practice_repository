#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//TODO
//implement the function below

int puzzle(int a[], int n, int idx, int v[], int p_flag)
{
	//printf("%d", idx);
	if (a[idx] == a[n-1])
	{
//		v[idx] = 1;
//		if (p_flag)
//			for (int l = (n-1); l >=0; l--)
//			{
//				if (v[l] == 1)
//					printf("%d ", n);
//			}
	
	return 1;
	}
	else if (v[idx] == 1)

		return 0;
	
	else if (n - idx > a[idx] && (v[idx + a[idx]] == 0)) // right check
        {
                v[idx] = 1;
                puzzle(a, n, a[idx]+idx, v, p_flag);
        }

	else if (idx - a[idx] >= 0) // left check
	{
		v[idx] = 1;
		puzzle(a, n, idx - a[idx], v, p_flag);
	}

}

//DO NOT change the main() function
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 0};
	int v[8] = {0};
	for(int i=0; i<8; i++)
		printf("%d ", a[i]);
	printf("\n");
	if(puzzle(a, 8, 0, v, 1))
		printf("\nThis puzzle is solvable.\n");
	else
		printf("\nThis puzzle is not solvable.\n");


	int b[] = {1, 2, 1, 3, 2, 0, 1, 0};
	int v1[8] = {0};

    for(int i=0; i<8; i++)
        printf("%d ", b[i]);
    	printf("\n");
	if(puzzle(b, 8, 0, v1, 1))
		printf("\nThis puzzle is solvable.\n");
	else
		printf("\nThis puzzle is not solvable.\n");

	int n = 1024;
	int c[n];
	int v2[n];

	int i, j;

	for(i = 0; i < n; i++)
		c[i] = i + 1;

	for(j = 1; j <= n; j++)
	{
		for(i = 0; i < n; i++) v2[i] = 0;
		if((puzzle(c, j, 0, v2, 0))==1)
		       	printf("%d\n", j); 
	}
	return 0;
}
