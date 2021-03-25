#include <stdio.h>

int main()
{
    int *p, a[] = {1, 2, 3, 4, 5};
    p = a;                    // p = a is same as p = &a as a is an array
    printf("%d ", *p);       // a[0]
    printf(" %d ", a);        // &a
    printf(" %d ", &a);       // &a
    printf(" %d ", *a);       // a[0]
    printf(" %d ", *(a + 1)); // a[1]
    printf(" %d ", a + 1);    // &a[1]
    printf(" %d ", *a + 1);   // a[1] + 1 = 1 + 1 = 2
    printf(" %d ", &a + 1);   // &a + (size of array)
    printf(" %x ", p);        // &a
    printf(" %d ", *p++);     // 1
    printf(" %d ", *(p++));   // 2
    printf(" %d ", (*p)++);   // 3
    printf(" %d ", *(p + 1)); // 4
    printf(" %d ", (*p) + 1); //5
    return 0;
}