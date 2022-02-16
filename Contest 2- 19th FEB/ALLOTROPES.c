#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int input;
        scanf("%d", &input);
        if (input % 2 == 0)
        {
            printf("SORRY\n");
            continue;
        }
        else
        {
            int a = (input / 2) + 1;
            int b = input - a;
            int cnt = 1;
            for (int i = 1; i <= a; i++)
            {
                for (int j = (a - 1); j >= i; j--)
                {
                    printf("  ");
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    if (cnt % 2 == 0)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("& ");
                    }
                    cnt++;
                }
                printf("\n");
            }

            for (int i = b; i >= 1; i--)
            {
                for (int j = b; j >= i; j--)
                {
                    printf("  ");
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    if (cnt % 2 == 0)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("& ");
                    }
                    cnt++;
                }
                printf("\n");
            }
        }
    }
    return 0;
}