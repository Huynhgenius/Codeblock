#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r1, r2, r3, c1, c2, c3, r, c;
    scanf("%d%d%d%d%d%d", &r1, &c1, &r2, &c2, &r3, &c3);
    if (r1==r2) r=r3;
    else if (r1==r3) r=r2;
    else if (r3==r2) r=r1;

    if (c1==c2) c=c3;
    else if (c1==c3) c=c2;
    else if (c3==c2) c =c1;

    printf("%d %d", r, c);
    return 0;
}
