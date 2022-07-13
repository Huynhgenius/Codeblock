//baitap8

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float r, pi, p, a;
    printf("Please enter the radius of the circle:");
    scanf("%f", &r);
    if ( r <= 0)
    {
        printf("The radius must be a positive number!");
    }
    else
    {
        pi = 3.141593;
        p = 2 * pi * r;
        a = pi * r * r;
        printf("The perimeter of the circle is %.0f \n", p);
        printf("The area      of the circle is %f", a);
    }


    return 0;
}
