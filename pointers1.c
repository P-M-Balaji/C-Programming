#include <stdio.h>

int main()
{
    int *p, a[] = {1,2,3,4,5};
    p = a; // p = a is same as p = &a as a is an array
    printf("%d\t", *p); // a[0]
    printf("%d\t", a); // &a
    printf("%d\t", &a); // &a
    printf("%d\t", *a); // a[0]
    printf("%d\t", *(a+1)); // a[1]
    printf("%d\t", a+1); // &a[1]
    printf("%d\t", *a + 1); // a[1] + 1 = 1 + 1 = 2
    printf("%d\t", &a+1); // &a + (size of array)
    printf("%x\t", p); // &a 
    printf("%d\t", *p++); // 1
    printf("%d\t", *(p++)); // 2
    printf("%d\t", (*p)++); // 3
    printf("%d\t", *(p+1)); // 4
    printf("%d\t", (*p)+1); //5 
    return 0;
}