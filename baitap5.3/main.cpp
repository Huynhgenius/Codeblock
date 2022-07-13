#include <stdio.h>
#include <stdlib.h>
#include<algorithm>
using namespace std;

int cal (int n)
{
    if(n/10!=1)
    {
        if(n%10>=1) return min(n%10, 4);
    }
    return 4;

}

int main()
{
    int i, n, dem=0, dem2=0;
    int *a;
    do
    {
        printf("How many element of numeric array? ");
        scanf("%d", &n);
        if ( n<=0)
        {
            printf("The number of element of numeric array must be greater than 0!");
        }
    }
    while (n<=0);
    a = (int*) malloc(n* sizeof(int));
    printf("Please enter value for %d elements:\n", n);
    for(int i = 0; i <n; i++)
    {
        printf("Value of the %2d", i+1);
        int t= cal((i+1)%100);
        if(t==1) printf("st");
        if (t==2) printf("nd");
        if (t==3) printf("rd");
        if(t==4) printf("th");
        printf(" element is: ");
        scanf("%d", a+i);
    }

    printf("The entered array is:\n " );
    for (i=0; i<n; ++i)
    {
        ++ dem;
        if (dem > 1)
        {
            printf(", %d", a[i]);
        }
        else printf ("%d", a[i]);
    }
    printf("\nThe reverse array is:\n " );
    for (i=n-1; i>=0; i--)
    {
        dem2 ++;
        if (dem2 > 1)
        {
            printf(", %d", a[i]);
        }
        else printf ("%d", a[i]);
    }
    printf("\n\n");
    return 0;



}
