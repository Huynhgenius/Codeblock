#include <stdio.h>

int main()
{
    int n;
    printf("How many positive even number that you want to display? ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Accept positive number only!");
    }
    else
    {
        printf("The first %d positive even numbers are: \n", n);
        printf("2");
        for(int i=2; i <= n; i++)
        {
            printf(", %d",i*2);
        }

    }

    return 0;
}
