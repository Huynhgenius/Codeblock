#include<stdio.h>

using namespace std;

int main()
{
    int n, r, j, s;

    printf("Please enter the positive interger N: ");
    scanf("%d",&n);
    printf("The number-triangle that has %d lines is: \n", n);

    for(r=1; r<=n; ++r)  // chay nguoc tu luc r = so input chay nho dan
    {
        for(s=1; s<=n-r; ++s)
        {
            printf("  ");
        }
        for (j = 1; j < r - 1; ++j)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
