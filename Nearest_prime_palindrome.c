#include <stdio.h>
#include <math.h>

int ispalindrome(int n)
{
    int t = n, s = 0, r;
    while (n)
    {
        r = n % 10;
        s = (s * 10) + r;
        n = n / 10;
    }
    if (t != s)
        return 0;
    return 1;
}

int isprime(int n)
{
    int f = sqrt(n);
    int i;
    for (i = 2; i <= f; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, h, l;
    printf("Enter the Number : ");
    scanf("%d", &n);
    l = h = n;
    while (1)
    {
        if (ispalindrome(h) && isprime(h))
        {
            printf("%d", h);
            break;
        }
        if (ispalindrome(l) && isprime(l))
        {
            printf("%d", l);
            break;
        }
        h++;
        l--;
    }
    return 0;
}