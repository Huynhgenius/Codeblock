//baitap14


#include <stdio.h>

using namespace std;

int main()
{
    int i, n;
    printf("Please enter 4-digit positive integer: ");
    scanf("%d", &i);
    if ( i > 9999 && i < 1000)
    {
        printf("Accept integer from 1000 to 9999 only!");
    }
    else
    {
        printf("The value of thousands is %d \n", i / 1000);
        printf("The value of hundreds  is %d \n", (i / 100)%10);
        printf("The value of tens      is %d \n", (i/10)%10);
        printf("The value of unit      is %d \n", i%10);
    }
    return 0;
}
