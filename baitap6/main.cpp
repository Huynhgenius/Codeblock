//baitap6
#include <stdio.h>

using namespace std;

int main()
{
    int w, h;
    printf("Please enter the width  of the rectangle: ");
    scanf("%d", &w);
    printf("Please enter the height of the rectangle: ");
    scanf("%d", &h);
    if( w <= 0 || h <= 0)
    {
        printf("The edge of rectangle must be a positive number!");
    }
    else
    {
        printf("The perimeter of the rectangle is %d \n", 2*(w +h));
        printf("The area      of the rectangle is %d \n", w*h);
    }
    return 0;
}
