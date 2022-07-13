#include<stdio.h>

/*cach 1: fflush(stdin); // dung cho window;
cach 2: getch(); // conio.h
cach 3: scanf(" %c"); // khong nen dung.
cach 4: scanf("%d%*c");
*/

using namespace std;

int main()
{
    int a, b;
    char c;
    float h;
    printf("Please enter the first integer: ");
    scanf("%d%*c",&a);
    //scanf("%d",&a);
    printf("Please enter the operator (+,-,*,/,%%): ");
    scanf("%c", &c);

    switch(c)
    {
    case '+':
        printf("Please enter the second integer: ");
        scanf("%d", &b);
        printf("The result is: %d + %d = %d", a, b, a+b);
        break;
    case '-':
        printf("Please enter the second integer: ");
        scanf("%d", &b);
        printf("The result is: %d - %d = %d", a, b, a-b);
        break;
    case '*':
        printf("Please enter the second integer: ");
        scanf("%d", &b);
        printf("The result is: %d * %d = %d", a, b, a*b);
        break;
    case '/':
        printf("Please enter the second integer: ");
        scanf("%d", &b);
        if (b != 0)
        {
            h = (float)a/b;
            printf("The result is: %d / %d = %f", a, b, h);
        }
        else
        {
            printf("The divisor can't be zero!");
        }
        break;
    case '%':
        printf("Please enter the second integer: ");
        scanf("%d", &b);
        if (b != 0)
        {
            printf("The result is: %d % %d = %d", a, b, a%b);
        }
        else
        {
            printf("The divisor can't be zero!");
        }
        break;
    default:
        printf("Accept +,-,*,/,%% only!");
    }
    return 0;
}
