#include <stdio.h>
#include <stdlib.h>

int main()
{
    // the number of temperatures to analyse
    int n;
    int *arr = malloc(n * sizeof(int));
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);
        arr[i] = t;
    }
    printf("---------------\n");
    for (int i = 0; i < n; i++)
    {
	    printf("%d", arr[i]);
    }
    int i = 0;
    while (i < n - 1)
    {
        int j = 0;
        while (j < n - 1)
        {
            if (arr[j] > arr[j+1])
            {
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
            j++;
        }
        i++;
    }
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    printf("\n------------\n");
    int temp;
    int test = 0;
    for (int i = 0; i < n; i++)
    {
    	if (arr[i] == (test + 1) || arr[i] == (test - 1))
		temp = arr[i];	
    }
    printf("%d\n", temp);
    return 0;
}
