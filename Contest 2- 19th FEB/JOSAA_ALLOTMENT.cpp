#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum >= 100 && sum <= 139)
        {
            cout << "YES" << endl
                 << "GFTI" << endl;
        }
        else if (sum >= 140 && sum <= 169)
        {
            cout << "YES" << endl
                 << "IIIT" << endl;
        }
        else if (sum >= 170 && sum <= 189)
        {
            cout << "YES" << endl
                 << "TIER 2 NIT" << endl;
        }
        else if (sum >= 190 && sum <= 209)
        {
            cout << "YES" << endl
                 << "TIER 2 NIT" << endl;
        }
        else if (sum >= 210 && sum <= 229)
        {
            cout << "YES" << endl
                 << "TIER 1 NIT" << endl;
        }
        else if (sum >= 230 && sum <= 259)
        {
            cout << "YES" << endl
                 << "TIER 2 IIT" << endl;
        }
        else if (sum >= 260 && sum <= 300)
        {
            cout << "YES" << endl
                 << "TIER 1 IIT" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}