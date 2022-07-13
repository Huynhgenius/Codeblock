#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int a, b, c, A, B, C;

    scanf("%d%d%d\n", &a, &b, &c);
    scanf("c%c%c", A, B, C);

    if (A =='A' && B == 'B' && C=='C')
    {
        printf("%d %d %d", a, b, c);
    }
    else if (A =='A' && B == 'C' && C=='B')
    {
        printf("%d %d %d", a, c, b);
    }
    else if (A =='B' && B == 'A' && C=='C')
    {
        printf("%d %d %d", b, a, c);
    }
    else if (A =='C' && B == 'B' && C=='A')
    {
        printf("%d %d %d", c, b, a);
    }


    return 0;
}
