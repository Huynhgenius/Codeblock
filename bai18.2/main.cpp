#include <stdio.h>

using namespace std;

int main()
{
    int n = 1, sum;
    printf("All perfect number that smaller than 1000 are: \n");
    while (n<=1000)
    {
        sum = 0;
        for ( int i = 1; i < n; i++)
        {
            if (n%i==0)
            {
                sum = sum + i;
            }
        }
        if (sum==n)
        {
            printf(", %d", n);
        }
        n++;
    }
    return 0;
}

