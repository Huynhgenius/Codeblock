#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, bin = 0, remain, product = 1;
    do
    {
        printf("Please enter integer N: ");
        scanf("%d", &n);
        if (n <=0) printf("N must be greater than or equal 0! ");
        break;
    }
    while (n <= 0);
    int k = n;
    while (n !=0)
    {
        remain = n % 2;
        bin = bin + (remain * product);
        n = n / 2;
        product *= 10;
    }
    printf("Conversion results: %dd = %db ", k, bin);
return 0;
}
