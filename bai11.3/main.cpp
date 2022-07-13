#include <stdio.h>

using namespace std;



int Fibonaci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;


}
int main()
{
    int *a;
    int n;
    do
    {
        printf("Please enter positive integer N: ");
        scanf("%d", &n);
        if ( n<=0)
        {
            printf("N must be greater or equal 0!");
        }
    }
    while (n<=0);
    a = (int*) malloc(n* sizeof(int));
    printf("The Fibonacci sequence with 8 numbers is:\n %d", n, Fibonacci(n));
    return 1;
}
