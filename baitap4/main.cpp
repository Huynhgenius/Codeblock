//baitap4

#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    printf("Please enter the first  number: ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d", &b);
    if(a > b)
    {

        printf("Comparison results: %d is greater than %d", a, b);
    }
    else if (a < b)
    {
        printf("Comparison results: %d is less than %d", a, b);
    }
    else
    {
        printf("Comparison results: both numbers are equal");
    }


    return 0;
}
