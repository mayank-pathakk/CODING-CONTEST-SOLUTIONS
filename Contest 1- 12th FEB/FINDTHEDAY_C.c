#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) // TAKING THE NUMBER OF TEST CASES AS INPUT
                // //RUNNING THIS LOOP EQUAL TO NUMBER OF TEST CASES TIMES
    {
        int date;
        scanf("%d", &date); // TAKING THE DATE AS INPUT

        if (date < 3)
        {
            printf("STUDY\n");
        }
        else
        {
            int x = date % 7; // MOD GIVES THE REMAINDER , SO AFTER EVERY 7 DAYS THE DAYS WILL REPEAT
                              // HENCE TAKING MOD 7 GIVES THE GENERAL CASE
            switch (x)
            {
            case 0:
                printf("SUNDAY\n"); // SIMPLE SWITCH SYNTAX AND STATEMENTS
                break;
            case 1:
                printf("MONDAY\n");
                break;
            case 2:
                printf("TUESDAY\n");
                break;
            case 3:
                printf("WEDNESDAY\n");
                break;
            case 4:
                printf("THURSDAY\n");
                break;
            case 5:
                printf("FRIDAY\n");
                break;
            case 6:
                printf("SATURDAY\n");
                break;
            }
        }
    }
    return 0;
}