#include <stdio.h>
void main()
{
    int clrscr();
    int a[15] = {1, 2, 3, 5, 6, 7}, size, i, pos, element, n = 6;
    size = sizeof(a) / sizeof(a[0]);
    scanf("%d\t%d", &element, &pos);
    if (n < size)
    {
        n++;
        for (i = n - 1; i > pos; i--)
            a[i] = a[i - 1];
        a[pos] = element;
        for (i = 0; i < n; i++)
            printf("%d\t", a[i]);
        for (i = 0; i < n; i++)
            printf("%d\t", a[i]);
    }
}