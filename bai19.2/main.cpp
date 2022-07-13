#include <stdio.h>

using namespace std;

int main()
{
    int n, k = 0;
    do
    {
        printf("Please enter positive integer N: ");
        scanf("%d", &n);
        if ( n <= 0 )
        {
            printf("Accept positive number only!");
        }
    }
    while (n < 0);
    for ( int i=1; i <= n; i++)
    {
        if (n%i==0)
        {
            k+= 1;
        }
    }
    if (k==2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}



