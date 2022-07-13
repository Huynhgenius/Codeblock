#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b)){
    if ( 0 <= a <= 1000000 && 0 <= b <= 1000000)
    {
        if ( a < b )
        {
            printf("%d",b - a);
        }
        else if ( a >= b)
        {
            printf("%d", a - b);
        }
    }
    }
    return 0;
}
