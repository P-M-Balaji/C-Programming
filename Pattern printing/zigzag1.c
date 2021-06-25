#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
    int i, j, n, num = 1;
    scanf("%d", &n);

    int **arr = NULL;
    arr = (int **)malloc(n * sizeof(int *));
    if (arr)
    {
        for (i = 0; i < n; i++)
            *(arr + i) = (int *)malloc(n * sizeof(int));
    }
    else
        return 0;

    for (j = 0; j < n; j++)
    {
        if (j & 1)
        {
            for (i = 0; i < n; i++)
                arr[i][j] = num++;
        }
        else
        {
            for (i = n - 1; i >= 0; i--)
                arr[i][j] = num++;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    if (arr)
    {
        for (i = 0; i < n; i++)
            free(*(arr + i));
        free(arr);
    }
    return 0;
}