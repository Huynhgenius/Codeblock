#include <iostream>


using namespace std;

int main()
{
    int n;
    double a, b,c;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        if (a+b != c && a-b!=c && b-a!=c && a*b!=c && float(a)/float(b)!=float(c) && float(b)/float(a)!=float(c))
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << "Possible" << endl;
        }

    }

}
