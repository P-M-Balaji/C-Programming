#include <stdio.h>

int factorial(int x)
{
    if(x == 1)
        return 1;
    return x * factorial(x - 1);
}

void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));
}



