#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n",(a*12)+(b*1)+(c*16));
    }
    return 0;
}