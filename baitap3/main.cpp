#include <stdio.h>
#include <math.h>

using namespace std;

int main ()
{
    int m, n;
    float h;
    printf("Please enter numerator : ");
    scanf("%d", &m);
    printf("Please enter denominator: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("The denominator can't be zero!");
    }
    else
    {
        h = (float) m/n;
        printf("Result: %d / %d = %f ", m, n, h);

    }
    return 0;
}
