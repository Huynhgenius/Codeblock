#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main()
{
    long long a, b;
    while (true)
    {
        cin >> a>>b;
        if ( a== 0 && b== 0)
            return 0;
        cout <<a/b<<" "<<a%b<<" / "<<b<<endl;
    }
    return 0;

}
