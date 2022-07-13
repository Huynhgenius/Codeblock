#include <stdio.h>

using namespace std;

int main ()
{

    int n, i;
    printf("How many number that you want to display? ");
    scanf("%d", &n);

    if ( n <= 0)
    {
        printf("Accept positive number only!");
    }
    else
    {
        printf("The first 10 positive interger are:\n");
        for (i=1; i <=n; ++i)
        {
            printf("%d, ", i);
        }
        printf("End");
    }
    return 0;
}

