#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if ( 0 <= a <= 1000000 && 0 <= b <= 1000000){
        if ( a < b )
        {
            printf("%d %d", a, b);
        }
        else
        {
            printf("%d %d", b, a);
        }
    }
    return 0;
}
