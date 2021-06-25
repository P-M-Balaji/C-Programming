// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *p = a, i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", &a[i]);
        printf("%d\t", a + i);
        printf("%d\t", p + i);
        printf("%d\t", &i[a]);
        printf("%d\t", &p[i]);
        printf("%d\n", &i[p]);
    }
    return 0;
}