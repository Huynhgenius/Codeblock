#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    printf("Please enter positive integer N: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0) {
        printf("Accept positive number only!");
        return 0;
        }
    }
    while (n <= 0);
    sum = 0;
    for ( int i=1; i<n; i++ )
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==n)
        {
            printf("%d is a perfect number", n);
        }
    else printf("%d is not a perfect number", n);
    return 0;
}



