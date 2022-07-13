#include <stdio.h>
#include<math.h>

using namespace std;

int main()
{       float h, r, pb, ab;
        double tsa, v;

        printf("Please enter the base's radius of the cylinder: ");
        scanf("%f", &r);

        printf("Please enter the height        of the cylinder: ");
        scanf("%f", &h);

        pb=2*M_PI*r;
        ab=M_PI*r*r;
        tsa= h*pb+2*ab;
        v=h*ab;


    if (r<=0 || h<=0 ){
        printf("The height and radius of cylinder must be a positive number! \n");
    }
    else {
        printf("The total surface area of the cylinder is %.10lf \n", tsa);
        printf("The volume             of the cylinder is %.10lf ", v);
    }
    return 0;
}
