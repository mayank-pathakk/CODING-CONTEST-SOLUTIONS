#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) // TAKING THE NUMBER OF TEST CASES AS INPUT
                // //RUNNING THIS LOOP EQUAL TO NUMBER OF TEST CASES TIMES
    {
        int date;
        cin >> date;

        // TAKING THE DATE AS INPUT

        if (date < 3)
        {
            cout << "STUDY\n";
        }
        else
        {
            int x = date % 7; // MOD GIVES THE REMAINDER , SO AFTER EVERY 7 DAYS THE DAYS WILL REPEAT
                              // HENCE TAKING MOD 7 GIVES THE GENERAL CASE
            switch (x)
            {
            case 0:
                cout << "SUNDAY\n"; // SIMPLE SWITCH SYNTAX AND STATEMENTS
                break;
            case 1:
                cout << "MONDAY\n";
                break;
            case 2:
                cout << "TUESDAY\n";
                break;
            case 3:
                cout << "WEDNESDAY\n";
                break;
            case 4:
                cout << "THURSDAY\n";
                break;
            case 5:
                cout << "FRIDAY\n";
                break;
            case 6:
                cout << "SATURDAY\n";
                break;
            }
        }
    }
    return 0;
}