#include <stdio.h>

using namespace std;

int main()
{
    int d, m, y;
    printf("Please enter any date in mm/dd/yyyy format: ");
    scanf("%02d/%02d/%d", &m, &d, &y);
    if ( y < 0 && (d > 31 || d < 1) && (m > 12 || m < 1))
    {
        printf("Input error: \n      1. The value of full year must be a positive integer.\n      2. The value of month must be from 1 to 12.\n      3. The value of date must be from 1 to 31." );
    }
    else
    {
        if ( m < 1 || m > 12 )
        {
            if (d < 1 || d > 31)
            {
                printf("Input error: \n      1. The value of month must be from 1 to 12.\n      2. The value of date must be from 1 to 31.\n ");
            }
            else if ( y < 0 && (d > 0 && d <= 31))
            {
                printf("Input error: \n      1. The value of full year must be a positive integer.\n      2. The value of month must be from 1 to 12.");
            }
            else
            {
                printf("Input error: The value of month must be from 1 to 12" );
            }
        }
        else if (d < 1 || d > 31)
        {
            if( y < 0 && (m <13 && m > 0))
            {
                printf("Input error: \n      1. The value of full year must be a positive integer.\n      2. The value of date must be from 1 to 31.");
            }
            else
            {
                printf("Input error: The value of date must be from 1 to 31");
            }
        }
        else if (y < 0)
        {
            printf("Input error: The value of full year must be a positive integer");
        }
        else
        {
            if (m ==2 && d >= 30)
                printf("%02d/%02d/%d is an invalid date", m, d, y);
            else if (m == 2 && d == 29)
            {
                if ( y% 4 == 0 && y!= 2100 )
                {
                    printf("%02d/%02d/%d is a valid date", m, d, y);
                }
                else
                {
                    printf("%02d/%02d/%d is an invalid date", m, d, y);
                }

            }
            else if ( m ==2 && d == 28 && y%4 != 0 || y == 2100 || y ==2200 || y == 2300)
            {
                printf("%02d/%02d/%d is a valid date", m, d, y);
            }
            else if ( (d > 0 && d <= 31) && (m == 1 || m == 3 || m ==5 || m ==7 || m ==8 || m == 10 || m ==12))
            {
                printf("%02d/%02d/%d is a valid date", m, d, y);
            }
            else if ( (d > 0 && d <=30 ) && (m ==4 || m ==6 || m ==9 || m ==11))
            {
                printf("%02d/%02d/%d is a valid date", m, d, y);
            }
            else
            {
                printf("%02d/%02d/%d is an invalid date", m, d, y);
            }
        }

    }
    return 0;
}
