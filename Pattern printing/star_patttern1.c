#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {

        //space
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        //star1
        for (int j = num; j > i; j--)
        {
            printf("* ");
        }

        //star2
        for (int j = num - 1; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}