#include <iostream>
#include<math.h>

using namespace std;

int main()
{       float a, b, c, h, p, k;

        printf("Please enter the first edge of triangle: ");
        scanf("%f", &a);
        printf("Please enter the second edge of triangle: ");
        scanf("%f", &b);

        printf("Please enter the third edge of triangle: ");
        scanf("%f", &c );

        h = a + b + c;
        p= h/2;
        k = sqrt(p*(p-a)*(p-b)*(p-c));


    if (a<0 || b<0 || c<0){
        printf("These three numbers must be a positive number! \n");
    }
    else {
        printf("The perimeter of the triangle is %.2f \n", h);
        printf("The area of the triangle is %.5f \n ", k);
    }
    return 0;
}
