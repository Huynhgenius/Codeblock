#include <stdio.h>
#include<stdlib.h>


using namespace std;

int main()
{
    int n,sum = 0;
    int *a;
    float av;
    do
    {
        printf("How many element of numeric array? ");
        scanf("%d", &n);
    }
    while (n <= 0);
    a = (int *)calloc(n, sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Value of the %2d ", i);
        if (i%10 == 1 && i%100 != 11)
        {
            printf("st element is: ");
        }
        else if (i%10 ==2 && i%100 != 12)
        {
            printf("nd element is: ");

        }
        else if (i%10 ==3 && i%100 != 13)
        {
            printf("rd element is: ");

        }
        else
        {
            printf("th element is: ");
        }
        scanf("%d",&a[i]);
        sum += a[i];

    }
    printf("The total   value of the numeric array is %d\n", sum);
    printf("The average value of the numeric array %.2f",(float) sum/n);
    free (a);
    return 0;
}
