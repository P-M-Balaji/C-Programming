#include <stdio.h>
void main()
{
    int n, num = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            if (j <= i)
                printf("%d", ++num);
            else
                printf("%d", --num);
        }
        num += i;
        printf("\n");
    }
}