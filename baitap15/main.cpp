#include <stdio.h>

using namespace std;

int main()
{
    int n, i, x, s, t;
    s = 0;
    printf("Please enter 4-digit positive integer: ");
    scanf("%d", &n);
    if ( n < 9999 && n < 1000)
    {
        printf("Accept integer from 1000 to 9999 only!");
    }
    else
    {
        t = n;
        for(i=1; i <=5; i++)
        {
            x = n%10;
            n=n/10;
            s=s+x;
        }
        printf("Sum all digits of %d is: %d + %d + %d + %d = %d", t, t / 1000, (t/100)%10, (t/10)%10, t%10, s);
    }
    return 0;
}


