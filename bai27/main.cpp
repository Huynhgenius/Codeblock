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
        switch (m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of date of %02d/%04d is 31 dates", m, y );
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of date of %02d/%04d is 30 dates", m, y );
            break;
        case 2:
            if (y%4 == 0 && (y!= 2100 || y != 2200 || y != 2300 || y!= 2500))
            {
                printf ("Number of date of %02d/%04d is 29 dates", m, y );
            }
            else
            {
                printf("Number of date of %02d/%04d is 28 dates", m, y );
            }
            break;
        }
        if ( m < 1 || m > 12 )
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
