
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n)==1){
    int s=1;
    for(int i=2; i<=sqrt(n); i++)
    if (n%i==0) s+=i+n/i;
    if ((int)sqrt(n) ==sqrt(n)) s=s-sqrt(n);
    if (s==n) printf("%d perfect \n", n);
    else if (abs(n-s)<=2) printf("%d almost perfect \n", n);
    else  printf("%d not perfect \n", n);
    }

    return 0;
}
