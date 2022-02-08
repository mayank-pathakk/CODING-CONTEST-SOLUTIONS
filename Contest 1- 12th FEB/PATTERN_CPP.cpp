#include <iostream>
using namespace std;

int main()
{
    /*
& & & & & & 
 &         & 
  &         & 
   &         & 
    &         & 
     & & & & & &
       */

    int t;
    cin >> t; // NUMBER OF TEST CASES
    while (t--)
    {
        int dimension_of_square;
        cin >> dimension_of_square; // DIMENSION OF SQUARE AS INPUT

        for (int i = 1; i <= dimension_of_square; i++)
        {
            for (int j = 2; j <= i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= dimension_of_square; j++)
            {
                if (i == 1 || j == 1 || j == dimension_of_square || i == dimension_of_square)
                {
                    cout << "& ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
