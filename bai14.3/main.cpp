#include <stdio.h>
#include <stdlib.h>


using namespace std;

void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
int main()
{
    int i, n, dem = 0;
    int j, min_idx;
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
    for (i=0; i<n; ++i)
    {
        printf("Value of the %d element is: ", i+1);
        scanf("%d", a+i);
    }
    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
            if (a[j] < a[min_idx])
                min_idx = j;

        swap(a[min_idx], a[i]);
    }
      for(int i = 0; i < n; i++){
                ++ dem;
        if (dem > 1)
        {
            printf(", %d", a[i]);
        }
        else printf ("%d", a[i]);
    }
    return 0;
}



