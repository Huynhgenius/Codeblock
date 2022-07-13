#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    int *a;
    do
    {
        printf("How many element of numeric array? ");
        scanf("%d", &n);
    }
    while (n <= 0);
    a = (int *)malloc(n*sizeof(int));
    for ( int i = 0; i < n; i++)
    {
        printf("Value of the %2d", i+1);
        if ((i+1)%10==1 && (i+1)%100 != 11) printf("st element is: ");
        else if ((i+1)%10==2 && (i+1)%100 != 12) printf("nd element is: ");
        else if ((i+1)%10==3 && (i+1)%100 != 13) printf("rd element is: ");
        else printf("th element is: ");
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (int i= 1; i < n; i++)
    {
        if (a[i] > max)  max = a[i];
        if (a[i] < min ) min = a[i];
    }
    printf("The minimum value of the numeric array is %d\n", min);
    printf("The maximum value of the numeric array is %d", max);

           return 0;
}
