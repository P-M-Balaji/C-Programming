#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max, i, j;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = 0;
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    int b[max + 1];
    for (i = 0; i <= max; i++)
        b[i] = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < max + 1; j++)
            {
                if (j == a[i])
                    b[j]++;
            }
        }
        for (i = 0; i < max + 1; i++)
        {
            if (b[i] % 2 == 1)
                printf("%d\t", i);
        }
        return 0;
    }
