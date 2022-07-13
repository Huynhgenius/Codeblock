#include <stdio.h>


using namespace std;

int main()
{
    float n;
    printf("Please enter the amount of Vietnam dong: ", n);
    scanf("%f", &n);
    if ( n > 0)
    {
        printf("Conversion value: %.0f VND = $%.4f", n, n/23207.23);
    }
    else
    {
        printf("Accept positive integer only!");
    }
    return 0;
}
