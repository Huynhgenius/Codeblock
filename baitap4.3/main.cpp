#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

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
    int n;
    while(1)
    {
        printf("How many element of numeric array? ");
        scanf("%d", &n);
        if (n > 0) break;
        printf("The number of element of numeric array must be greater than 0!");
    }
    int *a = (int*) malloc(n*sizeof(int)), mi=INT_MAX, ma=INT_MIN;
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
        mi = min(mi, *(a+i));
        ma = max(ma, *(a+i));
    }
    printf("The minimum value of the numeric array is %d\n", mi);
    printf("The maximum value of the numeric array is %d\n", ma);

    return 0;
}
