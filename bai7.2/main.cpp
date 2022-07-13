#include <stdio.h>

using namespace std;

int main()
{
    int n, sum;
    sum = 0;
    printf("Please enter positive integer N: ");
    scanf("%d", &n);
    if ( n> 0)
    {
        printf("The sum is S = ");
        printf("1 ");
        for (int j = 2; j <=n ; j++)
        {
            printf("+ %d ",j);
        }
        for ( int i = 1; i <= n; i++)
        {
            sum+=i;
        }
        printf("= %d", sum);
    }
    else (n<=1){
       printf("The sum is S = %d", 1);
    }
    else
        printf("Accept positive number only!");

    return 0;
}
