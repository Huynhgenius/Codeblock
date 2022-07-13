#include <stdio.h>

using namespace std;

int main()
{
    int a, b, k;
    do
    {
        printf("Please enter the lower bound A: ");
        scanf("%d", &a);
        printf("Please enter the upper bound B: ");
        scanf("%d", &b);
        if ( a <= 0 )
        {
            printf("The lower bound must be a positive integer!");
        }
        else if (b <= 0)
        {
            printf("The upper bound must be a positive integer!");
        }
    }
    while (a<= 0 || b <=0);

    printf("All prime numbers from %d to %d are: \n", a, b);
    for (int i = a; i <= b; i++)
    {

        if (i == 1 || i == 0)
            continue; //  bo qua nhung cau lenh sau do, quay tro lai for khi i = 1 hoac i = 0

        k = 1; // no da chia het cho 1 va chinh no

        for (int j = 2; j <= i / 2; ++j) // no chay tu 2 den mot phan 2 cua no, khong den b, ma van chia dc, thi khong phai prime
        {
            if (i % j == 0)
            {
                k = 0;
                break;
            }
        }
        if (k == 1)
            printf(", %d ", i);
    }


    return 0;
}

