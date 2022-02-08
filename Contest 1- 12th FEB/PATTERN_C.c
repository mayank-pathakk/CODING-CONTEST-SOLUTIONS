#include <stdio.h>

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
    scanf("%d", &t); // NUMBER OF TEST CASES
    while (t--)
    {
        int dimension_of_square;
        scanf("%d", &dimension_of_square); // DIMENSION OF SQUARE AS INPUT

        for (int i = 1; i <= dimension_of_square; i++)
        {
            for (int j = 2; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= dimension_of_square; j++)
            {
                if (i == 1 || j == 1 || j == dimension_of_square || i == dimension_of_square)
                {
                   printf("& ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
