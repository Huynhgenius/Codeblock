#include <iostream>

using namespace std;

int main()
{
    float a, b, h, c;
    a = 3.141593;
    printf("Please enter the radius of the circle:");
    scanf("%f", &b);

    h = 2 * a * b;
    c = a * b * b;


    if( b <= 0){
    printf("The radius must be a positive number!");
    } else {
    printf("The perimeter of the circle is %f \n", h);
    printf("The area of the circle is %f \n", c);
    }

    return 0;
}
