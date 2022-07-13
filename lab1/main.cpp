#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    sum = 0;
    do
    {
        printf("Nhap N: \n");
        scanf("%d", &n);
        sum+=n;
    }
    while (n!= 0);
        printf("%d", sum);
    return 0;
}
