#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int input, x;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (i % 2 == 0)
            {
                cnt1 += x;
            }
            else
            {
                cnt2 += x;
            }
        }

        if (n % 2 == 0)
        {
            int y = cnt1 - cnt2;
            printf("%d\n", y);
        }
        else
        {
            int y = cnt1 - cnt2;
            printf("%d\n", y);
        }
    }
    return 0;
}
