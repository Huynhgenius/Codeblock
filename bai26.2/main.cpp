#include <stdio.h>

using namespace std;

int main()
{
    int n;
    printf("Please enter the positive integer N: ");
    scanf("%d", &n);
    do
    {
        printf("The multiplication table of %d is: \n", n);
        for (int i=1; i<=10; i++)
        {
            printf("%5d\tx%5d\t=\t5%d \n", i, n, n*i);
        }
    }
    while ( n <= 0 );

    return 0;
}
