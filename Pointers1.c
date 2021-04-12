#include <stdio.h>

int main()
{
    int *p, a[] = {1, 2, 3, 4, 5};
    p = a;                    // p = a is same as p = &a as a is an array
    printf("%d ", *p);        // a[0]
    printf(" %d ", a);        // &a
    printf(" %d ", &a);       // &a
    printf(" %d ", *a);       // a[0]
    printf(" %d ", *(a + 1)); // a[1]
    printf(" %d ", a + 1);    // &(a[1])
    printf(" %d ", *a + 1);   // a[0] + 1 = 1 + 1 = 2
    printf(" %d ", &a + 1);   // &a + (size of array)
    printf("\n%x ", p);       // &a
    printf("%d ", *p);        // a[0] = 1
    printf(" %d ", *p++);     // a[0] = 1, p++
    printf("\n%x ", p);       // p = &(a[1])
    printf("%d ", *p);        // a[1] = 2
    printf(" %d ", *(p++));   // a[1] = 2, p++
    printf("\n%x ", p);       // p = &(a[2])
    printf("%d ", *p);        // a[2] = 3
    printf(" %d ", (*p)++);   // a[2] = 3, a[2]++
    printf("\n%x ", p);       // p = &(a[2])
    printf("%d ", *p);        // a[2] = 4
    printf(" %d ", *(p + 1)); // a[3] = 4
    printf("\n%x ", p);       // p = &a[2]
    printf("%d ", *p);        // a[2] = 4
    printf(" %d", (*p) + 1);  // a[2] + 1 = 4 + 1 = 5
    printf("\n%x ", p);       // &a[2]
    printf("%d\n", *p);       // a[2]
    for (int i = 0; i < 5; i++)
        printf("%d\t", a[i]);
    return 0;
}