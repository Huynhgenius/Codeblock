#include <stdio.h>

using namespace std;

int main()
{
    int h, m, s;
    printf("Please enter the time with format hh:mm:ss >> ");
    scanf("%d:%d:%d", &h, &m, &s);
    if (h > 23 || h < 0)
    {
        printf("Hours must be from 00 to 23!");
    }
    else
    {
        if(m <0 || m > 59)
        {
            printf("Minutes must be from 00 to 59!");
        }
        else
        {
            if ( s < 0 || s > 59)
            {
                printf("Seconds must be from 00 to 59!");
            }
            else
            {
                printf("Conversion value: %d:%d:%d = %d*3600 + %d*60 + %d = %d", h, m, s,  h , m, s, h*3600 + m*60 +s );
            }
        }
    }
    return 0;

}



