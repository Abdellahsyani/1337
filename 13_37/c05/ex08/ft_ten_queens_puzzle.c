#include <unistd.h>


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    int *arr;
    scanf("%d", &N);
    arr = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        int pi;
        scanf("%d", &pi);
	arr[i] = pi;
    }
    printf("the array before sort\n");
    for (int u = 0; u < N; u++)
    {
            printf("%d", arr[u]);
    }
    printf("\n");
    int i, j;
    int tem;
    i = 0;
    while (i < N - 1)
    {
	    j = 0;
	    while (j < N - 1)
	    {
		    if (arr[j] > arr[j+1])
		    {
			    tem = arr[j];
			    arr[j] = arr[j+1];
			    arr[j+1] = tem;
		    }
		    j++;
	    }
	    i++;
    }
    printf("the array after sort\n");

    for (int u = 0; u < N; u++)
    {
	    printf("%d", arr[u]);
    }
    printf("\n");
    int k;
    int *sort;
    sort = malloc(sizeof(int) * (N-1));
    k = 0;
    while (k < N)
    {
	    sort[k] = arr[k+1] - arr[k];
	    k++;
    }
    i = 0;
    while (i < N - 2)
    {
	    j = 0;
	    while (j < N - 2)
	    {
		    if (sort[j] > sort[j+1])
		    {
			    tem = sort[j];
			    sort[j] = sort[j+1];
			    sort[j+1] = tem;
		    }
		    j++;
	    }
	    i++;
    }
    printf("%d\n", sort[0]);

    return 0;
}
