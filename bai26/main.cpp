#include <stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int a, b;
    char h;

    printf("Please enter the first integer: ");
    scanf("%d", &a);
    fflush(stdin);

    printf("Please enter the operator (+,-,*,/,%): ");
    scanf("%c", &h);

    switch (h)
    {
    case '+':
        printf("Please enter the second integer: ");
        scanf("%d", &b);
        if (b != 0)
        {
            printf("The result is: %d + %d = %d", a + b );
        }
        else
        {
            printf("The divisor can't be zero!");
        }
        break;

    }

    return 0;
}
