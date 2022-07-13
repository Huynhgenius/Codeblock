// Bai tap 2

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float n, h;
    printf ("Please enter any number: ");
    scanf("%f", &n);
    h = sqrt(n);
    if ( n > 0){
        printf ("Square root of %f is %f", n, h);
    }   else if ( n < 0){
        printf("Accept positive number only!");
    }    else {
        printf ("Square root of 0.000000 is 0.000000");
    }
    return 0;
}
