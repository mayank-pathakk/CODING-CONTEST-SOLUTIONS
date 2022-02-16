#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int sum = a + b + c;
        if (sum >= 100 && sum <= 139)
        {
            printf("YES\nGFTI\n");
        }
        else if (sum >= 140 && sum <= 169)
        {
            printf("YES\nIIIT\n");
        }
        else if (sum >= 170 && sum <= 189)
        {
            printf("YES\nTIER 2 NIT\n");
        }
        else if (sum >= 190 && sum <= 209)
        {
            printf("YES\nTIER 2 NIT\n");
        }
        else if (sum >= 210 && sum <= 229)
        {
            printf("YES\nTIER 1 NIT\n");
        }
        else if (sum >= 230 && sum <= 259)
        {
            printf("YES\nTIER 2 IIT\n");
        }
        else if (sum >= 260 && sum <= 300)
        {
            printf("YES\nTIER 1 IIT\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
