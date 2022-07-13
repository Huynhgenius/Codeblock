#include <stdio.h>

using namespace std;

int main()
{
    int n, sum;
    int i,j=2;
    sum = 0;
    do
    {
        printf("Please enter positive integer N: ");
        scanf("%d", &n);
        if ( n > 0) break;
        printf("Accept positive number only!");
    }
    while (1);

    printf("The sum is S = ");
    for (i = 1; i<=n; i+=2, j+=2)
    {

        sum+=(i-j);
        printf("%d - %d + ", i, j);
    }
    printf("= %d", sum);


    return 0;
}
