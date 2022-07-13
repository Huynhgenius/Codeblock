#include <stdio.h>

int main()
{
    int n;
    printf("How many positive odd number that you want to display? ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Accept positive number only!");
    }
    else
    {
        printf("The first %d positive odd numbers are: \n", n);
        printf(" ");
        for(int i=1; i <= n; i++)
        {
            printf("%d, ",2*i-1);
        }

    }

    return 0;
}
