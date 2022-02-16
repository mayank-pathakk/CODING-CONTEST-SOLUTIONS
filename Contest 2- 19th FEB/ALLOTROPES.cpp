#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int input;
        cin >> input;
        if (input % 2 == 0)
        {
            cout << "SORRY\n";
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
                    cout << "  ";
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    if (cnt % 2 == 0)
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "& ";
                    }
                    cnt++;
                }
                cout << endl;
            }

            for (int i = b; i >= 1; i--)
            {
                for (int j = b; j >= i; j--)
                {
                    cout << "  ";
                }
                for (int j = 1; j <= (2 * i - 1); j++)
                {
                    if (cnt % 2 == 0)
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "& ";
                    }
                    cnt++;
                }
                cout << endl;
            }
        }
    }
    return 0;
}