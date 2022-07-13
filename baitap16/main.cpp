#include <stdio.h>

using namespace std;

int main()
{
    int n, a, h;
    printf("Please enter 4-digit positive integer: ");
    scanf("%d", &n);
    h =n;
    if ( n>999 && n <10000)
    {
    int b = 0;
    while ( n > 0){
    a = n %10;
    b = b*10 + a;
    n = n /10;
    }
    printf("The reverse number of %d is %d", h, b);
    }
    else
    {
        printf("Accept integer from 1000 to 9999 only!");
    }
    return 0;
}
