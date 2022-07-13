#include <stdio.h>

using namespace std;

int main()
{
    int A, B, lcm, gcd;
    do {
        printf("Please enter the positive interger A: ");
        scanf("%d", &A);
        printf("Please enter the positive interger B: ");
        scanf("%d", &B);
        if (A <0 || B < 0) {
            printf("A and B must be greater than or equal 0!\n"); }
    }
    while( A <0 || B < 0);
    if (A >0 && B==0)
    {
        printf("The greatest common divisor of %d and %d is %d\n", A, B, B);  // sai day
        printf("The least common multiple of %d and %d is %d\n", A, B, A);    // sai
    }
    else if (A==0 && B > 0)
    {
        printf("The greatest common divisor of %d and %d is %d\n", A, B, A);  // sai
        printf("The least common multiple of %d and %d is %d\n", A, B, B);   // sai
    }
    else
    {
        printf("The greatest common divisor of %d and %d is\n", A, B); // sai
        printf("\t");
        int a = A;
        int b = B;
         printf("(%d,%d)", a, b);
        while (A!=B)
        {
            if (A>B)
            {
                A-=B;
            }
            else if (A<B)
            {
                B-=A;
            }

            printf("=(%d,%d)", A,B);
        }
        gcd = A;
        lcm = a*b/ gcd;
        printf("\nThe least common multiple of %d and %d is %d", A, B, lcm);
    }
    return 0;
}
