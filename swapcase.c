#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int clrscr();
    for (int i = 0; i < 100; i++)
        scanf("%c", &a[i]);
    int value;
    for (int i = 0; a[i]; i++)
    {
        value = (int)a[i];
        if (value > 96 && value < 123)
            printf("%c", value - 32);
        else if (value > 64 && value < 91)
            printf("%c", value + 32);
    }
    return 0;
}
