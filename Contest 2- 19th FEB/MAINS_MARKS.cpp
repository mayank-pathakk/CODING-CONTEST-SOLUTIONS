#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        char x;
        cin >> n;
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
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

        cout << total << endl;
        cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;
    }
    return 0;
}