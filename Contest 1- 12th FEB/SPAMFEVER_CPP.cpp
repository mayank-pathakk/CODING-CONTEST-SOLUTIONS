#include <iostream>
#include <math.h>
using namespace std;
  
// for detailed explaination do post your query in the coding section of DC server

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long N, D, x = 1;
        cin >> N >> D;
        if (N <= (int(pow(10, 8))))
        {
            if (N <= D || D > 21)
                x = N;
            else if (D >= 11)
            {
                D = D - 10;
                x = x * (pow(2, 10));
                while ((D--) && (x < N))
                    x *= 3;
                if (x > N)
                    x = N;
            }
            else if (D > 0 && D <= 10)
            {
                x = x * (pow(2, D));
                if (x > N)
                    x = N;
            }
            cout << x << endl;
        }
    }
    return 0;
}
