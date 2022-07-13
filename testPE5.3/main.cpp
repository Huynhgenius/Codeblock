#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, i;
    int *a;
    do
    {
        printf("How many element of numeric array? ");
        scanf("%d", &n);
    }
    while (n <= 0);
    a = (int *)malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Value of the %2d", i+1);
        if ((i+1)%10==1 && (i+1)%100 != 11) printf("st element is: ");
        else if ((i+1)%10==2 && (i+1)%100 != 12) printf("nd element is: ");
        else if ((i+1)%10==3 && (i+1)%100 != 13) printf("rd element is: ");
        else printf("th element is: ");
        scanf("%d",&a[i]);
    }
    int dem = 0;
    int dem2=0;
    printf("The entered array is: \n");
    for (i = 0; i < n; i++)
    {
        ++ dem;
        if ( dem > 1)
            printf(", ");
        printf("%d", a[i]);
    }
    printf("\nThe reverse array is: \n");
    for (i = n - 1; i >= 0; -- i){
        ++ dem2;
        if ( dem2 > 1)
            printf(", ");
        printf("%d", a[i]);
    }

    return 0;
}
