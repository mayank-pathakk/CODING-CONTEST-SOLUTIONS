#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        char x;
        scanf("%d", &n);
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%c",&x);
            if (x == 'C')
            {
                cnt1++;
            }
            else if (x == 'W')
            {
                cnt2++;
            }
            else
            {
                cnt3++;
            }
        }
        int total = (cnt1 * 4) - (cnt2 * 1);

        printf("%d\n", total);
        printf("%d %d %d\n", cnt1, cnt2, cnt3);
    }
    return 0;
}