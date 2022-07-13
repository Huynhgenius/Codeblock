#include<stdio.h>

using namespace std;

int main()
{
    int n, r, s, k=0;

    printf("Please enter the positive interger N: ");
    scanf("%d",&n);
    printf("The star-triangle that has %d lines is: \n", n);

    for(r=1; r<=n; ++r, k=0)
    {
        for(s=1; s<=n-r; ++s)
        {
            printf("  ");
        } // n - r = 4 - 1 do do in ra 3 vong  khoang trang
        //  for(c=1;c<=r ;c++) printf("* "); // c = r = 1 la in ra mot sao
        while (k != 2 * r - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
