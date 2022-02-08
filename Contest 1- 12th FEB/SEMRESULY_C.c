#include <stdio.h>

int main()
{
    int t; // TAKING NUMBER OF TEST CASES
    scanf("%d", &t);
    while (t--) // RUNNING THIS LOOP EQUAL TO NUMBER OF TEST CASES TIMES
    {
        int no_of_elements;
        scanf("%d", &no_of_elements); // TAKING TOTAL NUMBER OF INPUTS FROM USER
        int element;
        int countODD = 0; // SEPERATE VARIABLES OF COUNT NUMBER OF ODD AND EVENS
        int countEVEN = 0;
        for (int i = 0; i < no_of_elements; i++)
        {
            scanf("%d", &element); // TAKING ALL THE ELEMENTS AS INPUT
            if (element % 2 == 0)  // CHECK IF EVEN , THEN COUNTING IT IN EVEN COUNTING VARIABLE
            {
                countEVEN++;
            }
            else
            {
                countODD++;
            }
        }
        if (countODD > countEVEN) // CHECKING IF ODDS ARE MORE OR EVEN ARE MORE
        {
            printf("ODD\n");
            printf("%d\n", countODD);
            printf("%d\n", countODD % countEVEN); // PRINTING THE REMAINDER OF NO OF ODDS DIVIDED BY NO OF EVENS
        }
        else if (countODD < countEVEN)
        {
            printf("EVEN\n");
            printf("%d\n", countEVEN);
            printf("%d\n", countEVEN % countODD);
        }
        else
        {
            printf("EQUAL\n");
        }
    }

    return 0;
}
