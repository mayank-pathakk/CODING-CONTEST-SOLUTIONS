
// for detailed explaination do post your query in the coding section of DC server


#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int population, day;
        scanf("%d%d", &population, &day);
        int current = 1, infected = 1;
        if (day == 0 || population == 1)
        {
            printf("1\n");
        }
        else if ((day > 0 && day <= 10) || population <= 1024)
        {

            for (int i = 1; i <= 10; i++)
            {
                infected *= 2;
                if (day == current)
                {
                    if (population > infected)
                    {
                        printf("%d\n", infected);
                        break;
                    }
                    else
                    {
                        printf("%d\n", population);
                        break;
                    }
                }
                if (infected >= population)
                {
                    printf("%d\n", population);
                    break;
                }
                current++;
            }
        }
        else
        {
            infected = 1024;
            current = 11;
            while (1 > 0)
            {
                infected *= 3;
                if (day == current)
                {
                    if (population > infected)
                    {
                        printf("%d\n", infected);
                        break;
                    }
                    else
                    {
                        printf("%d\n", population);
                        break;
                    }
                }
                if (infected >= population)
                {
                    printf("%d\n", population);
                    break;
                }
                current++;
            }
        }
    }
    return 0;
}