#include <stdio.h>
#include <iostream>

int main()
{

    int *a, dem, i, n,j, h;
    do
    {
        printf("Please enter integer N: ");
        scanf("%d", &n);
        if (n<0)
        {
            printf("N must be greater than or equal 0!");
        }
    }
    while (n <0);
    h=n;
    a = (int*) malloc(n* sizeof(int));
    i=0;
    while(n!=0)
    {
        dem = 0;
        dem = n% 16;
        if(dem <10)
        {
            *(a+i)=dem+48;
            i++;

        }
        else
        {
            *(a+i)=dem + 55;
            i++;
        }

        n=n/16;

    }
    for (int j=i-1; j>=0; j--)
    printf("Conversion results: %dd = %ch", h, *(a+j));
    return 0;
}
