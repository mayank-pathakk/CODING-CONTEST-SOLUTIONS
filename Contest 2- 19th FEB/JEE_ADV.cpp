#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int input, x;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
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
            cout << y << endl;
        }
        else
        {
            int y = cnt1 - cnt2;
            cout << y << endl;
        }
    }
    return 0;
}

