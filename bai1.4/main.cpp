#include <stdio.h>
#include"EX01Lib.h"

using namespace std;

int main()
{
    float h, r;
    do {
    printf("Please enter the base’s radius of the cylinder: ");
    scanf("%f", &h);
    printf("Please enter the height        of the cylinder: ");
    scanf("%f", &r);
    if (h<= 0 || r <= 0) printf("The height and radius of cylinder must be a positive number!");
    } while (h<=0 || r <=0);
    float total = h*p+2*r;
    float volume = h*r;
    printf("The total surface area of the cylinder is %d", total);
    printf("The volume             of the cylinder is %d", volume);


    return 0;
}
