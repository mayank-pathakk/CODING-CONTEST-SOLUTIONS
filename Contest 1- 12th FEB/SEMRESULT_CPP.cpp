#include <iostream>
using namespace std;

int main()
{
    int t;          //TAKING NUMBER OF TEST CASES
    cin >> t;
    while (t--)                 //RUNNING THIS LOOP EQUAL TO NUMBER OF TEST CASES TIMES 
    {
        int no_of_elements;
        cin >> no_of_elements;      // TAKING TOTAL NUMBER OF INPUTS FROM USER
        int element;
        int countODD=0;                  // SEPERATE VARIABLES OF COUNT NUMBER OF ODD AND EVENS
        int countEVEN=0;
        for (int i = 0; i < no_of_elements; i++)         
        {
            cin>>element;            //TAKING ALL THE ELEMENTS AS INPUT
            if(element % 2 == 0)    // CHECK IF EVEN , THEN COUNTING IT IN EVEN COUNTING VARIABLE
            {
                countEVEN++;
            }
            else
            {
                countODD++;
            }
        }
        if(countODD > countEVEN)          //CHECKING IF ODDS ARE MORE OR EVEN ARE MORE
        {
             cout<<"ODD\n";
             cout<<countODD<<endl;
             cout<<(countODD%countEVEN)<<endl;    //PRINTING THE REMAINDER OF NO OF ODDS DIVIDED BY NO OF EVENS
        }
        else if(countODD < countEVEN)
        {
            cout<<"EVEN\n";
            cout<<countEVEN<<endl;
            cout<<(countEVEN%countODD)<<endl;
        }
        else
        {
            cout<<"EQUAL\n";
        }
    }
    
    return 0;
}