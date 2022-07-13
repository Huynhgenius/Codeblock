#include <stdio.h>

using namespace std;

int main()
{
    int y, m, h;
    printf("Please enter the full year: ");
    scanf("%d", &y);
    if (y >= 0)
    {
        printf("Please enter any month of %d: ", y);
        scanf("%d", &m);
        if ( m == 1 || m == 3 || m == 7 ||m == 8 || m ==10 || m == 12)
        {
            printf("Number of date of %02d/%04d is 31 dates", m, y );
        }
        else if ( m == 4 || m == 6 || m == 9 || m == 11)
        {
            printf("Number of date of %02d/%04d is 30 dates", m, y );
        }
        else if ( m = 2)
        {
            if (y%4 == 0 && (y!= 2100 || y != 2200 || y != 2300 || y!= 2500)
            {
            printf ("Number of date of %02d/%04d is 29 dates", m, y );
            }
            else
            {
                printf("Number of date of %02d/%04d is 28 dates", m, y );
            }
        }

        else
        {
            printf("The value of month must be from 1 to 12!");
        }
    }
    else
    {
        printf("The value of full year must be a positive integer!");
    }



    return 0;
}
