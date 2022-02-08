#include <iostream>
using namespace std;

int main()
{
    double interval_at_which_cow_moo_in_min;
    double total_duration_of_class_in_hours; // Declaring variables to take inputs | Taking time in decimal (eg. 0.5 hrs)

    cin >> interval_at_which_cow_moo_in_min >> total_duration_of_class_in_hours; // Taking input

    double total_duration_of_class_in_minutes = total_duration_of_class_in_hours * 60.0; // Converting hours to mins

    if (interval_at_which_cow_moo_in_min > total_duration_of_class_in_minutes)
    {
        cout << "1\n"; // Entire class over but cow does not moo
    }

    else
    {

        int ans = total_duration_of_class_in_minutes / interval_at_which_cow_moo_in_min; // Calculating answer and always taking
                                                                                  //  floor value that is if cow moo 3.14 times that means
                                                                                  // it moos 3 times only
        cout << ans+1 << endl;
    }
    return 0;
}