#include <stdio.h>

void reverse_array(int *b, int n)
{
    int temp;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = *(b + i);
        *(b + i) = *(b + j);
        *(b + j) = temp;
    }
}

void main()
{
    int i, j, n, m, size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    n = n % size;
    reverse_array(a, size);
    reverse_array(a, size - n);
    reverse_array(a + size - n, n);
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}