#include <stdio.h>

using namespace std;

int main()
{
    int n;
    unsigned long long tich = 1;
    printf("Please enter positive integer N: ");
    scanf("%d", &n);
    if ( n > 0 && n != 1)
    {

        printf("Result: %d! = ", n);
        printf("1");
        for (int j = 2; j <=n ; j++)
        {
            printf("*%d",j);
        }
        for ( int i = 1; i <= n; i++)
        {
            tich*=i;
        }
        printf(" = %.llu", tich);
    }
    else if (n<0)
    {
        printf("N must be greater than or equal 0!");
    }
    else if (n==0)
    {
        printf("Result: 0! = 1");
    }
    else if (n==1)
    {
        printf("Result: 1! = 1");
    }

    return 0;
}
