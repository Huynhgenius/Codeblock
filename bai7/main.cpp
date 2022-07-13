#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, p, h;
    printf("Please enter the first  edge of triangle: ") ;
    scanf("%f", &a);
    printf("Please enter the second edge of triangle: ") ;
    scanf("%f", &b);
    printf("Please enter the third  edge of triangle: ") ;
    scanf("%f", &c);
    if ( a+b > c & a + c > b & c + b > a)
    {
        if( a <= 0 || b <=0 || c <= 0)
        {   printf("These three numbers must be a positive number!");

        }   else {
       p = a + b + c;
            h = sqrt((p/2)*(p/2 - a)*(p/2 - b)*(p/2 -c));
            printf("The perimeter of the triangle is %f \n", p);
            printf("The area      of the triangle is %f", h);
        }
    }
    else
    {
        printf("These three numbers do not make a triangle!");
    }
    return 0;
}
