#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, dem, dem2, dem3;
    dem = dem2 = dem3 = 0;
    int *a;
    do
    {
        printf("How many element of numeric array? ");
        scanf("%d", &n);

    }
    while ( n <= 0);
    a = (int *)malloc(n*sizeof(int));
    printf("Please enter value for &d elements: \n", n);
    for (int i = 0; i <n; i++ )
    {
        printf("The value of a[%d] is: ", i );
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            dem ++;
        }
        else if (a[i]==0)
        {
            dem2 ++;
        }
        else
        {
            dem3 ++;
        }
    }
    printf("The number of negative elements is %d\n", dem);
    printf("The number of zero     elements is %d\n", dem2);
    printf("The number of positive elements is %d", dem3);
    return 0;
}
