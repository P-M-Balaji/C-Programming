#include <stdio.h>
void reverse_array(int b[], int n)
{
    int temp;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
}

void main()
{
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    reverse_array(a, size);
}
