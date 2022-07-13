#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int *a, n, t1 = 0, t2 = 1, nextTerm = 0, i;
    printf("Please enter positive integer N: ");
    scanf("%d", &n);
    if(n == 0 || n == 1)
        printf ("%d", n);
    else
        nextTerm = t1 + t2;
    a =(int*) malloc(n*sizeof(int));
    for (i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("%d", t2);
}
