#include <stdio.h>


int main()
{
  // Declaring variables to take inputs | Taking time in decimal (eg. 0.5 hrs)

    double interval_at_which_cow_moo_in_min;
    double total_duration_of_class_in_hours;             
    
   

    scanf("%lf",&interval_at_which_cow_moo_in_min);
    scanf("%lf",&total_duration_of_class_in_hours);    // Taking input

    // Converting hours to mins
    double total_duration_of_class_in_minutes = total_duration_of_class_in_hours * 60.0; 
    

    if (interval_at_which_cow_moo_in_min > total_duration_of_class_in_minutes)
    {
        printf("1\n"); // Entire class over but cow does not moo again
    }

    else
    {

        int ans = (total_duration_of_class_in_minutes / interval_at_which_cow_moo_in_min); // Calculating answer and always taking
                                                                                  //  floor value that is if cow moo 3.14 times that means
                                                                                  // it moos 3 times only
        printf("%d\n",ans+1);
    }
    return 0;
}