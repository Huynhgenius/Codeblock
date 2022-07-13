#include <stdio.h>

using namespace std;

int main()
{
    int n, r, s, j;

    printf("Please enter the positive interger N: ");
    scanf("%d",&n);
    printf("The star-triangle that has %d lines is: \n", n);

    for(r=n; r>=1; --r)  // chay nguoc tu luc r = so input chay nho dan
    {
        for(s=0; s<=n-r; ++s)
        {
            printf("  ");
        }
       for (j = 0; j < 2*r - 1; ++j)
        printf("* ");
        printf("\n");
    }
    return 0;
}
