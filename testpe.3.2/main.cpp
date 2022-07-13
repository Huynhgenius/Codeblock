#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, dem, dem2;
    int *a;
    dem = dem2 = 0;
    do
    {
        printf("How many element of numeric array? ");
        scanf("%d", &n);
    }
    while (n <=0);

    a = (int *)malloc(n*sizeof(int));
    for ( int i= 1; i <= n; i++)
    {
        printf("The value of element %d is: ", i);
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            dem ++;
        } else {
        dem2 ++;
        }
    }
    printf("The number of odd  elements is %d\n", dem2);
    printf("The number of even elements is %d", dem);
    return 0;
}
