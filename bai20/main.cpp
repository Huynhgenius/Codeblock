#include <stdio.h>

using namespace std;

int main()
{
    int i, h, m, s;
    printf("Please enter the time in seconds: ");
    scanf("%d", &i);
    if ( i > 0)
    {
        h = i/3600;
        m = (i - h*3600)/60;
        s = i - (h*3600 + m*60);
        //      printf("Conversion value: %d seconds = %02d:%02d:%02d", i, i / 3600, (i - i/3600 *3600)/60, i - (i/3600*3600 + (i-i/3600*3600)/60*60);
        printf("Conversion value: %d seconds = %02d:%02d:%02d", i, h, m, s);
    }
    else
    {
        printf("Accept positive integer only!");
    }
    return 0;
}
