#include <stdio.h>
#include <string.h>
void x_pattern(char str[])
{
    int n = strlen(str);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || n - i - 1 == j)
                printf("%c", str[j]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void main()
{
    char a[] = "welcome";
    x_pattern(a);
}