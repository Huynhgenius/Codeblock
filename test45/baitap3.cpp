#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{
    float m, n;
    printf("Please enter numerator : ");
    scanf("%f", &m);
    printf("Please enter denominator: ");
    scanf("%f", &n);
    if ("n == 0 ")
    {
        printf("The denominator can't be zero!");
    }
    else
    {
        printf("Result: %f / %f = %f ", m, n, m / n);

    }
    return 0;
}
