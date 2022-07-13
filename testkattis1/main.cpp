/* kattis Homework
#include <stdio.h>
#include <string.h>

using namespace std;

int main ()
{
    char s[1000];
    int dem, dem1=0, dem2;
    fgets(s, 1000, stdin);
    for ( int i = 0; i < strlen(s) ; i++){
    if (s[i] == '-') dem = s[i+1] -s[i-1] + 1;
    if (s[i]==';' && s[i] !=' ') dem1++;
    }
    printf("%d", dem + dem1);
    return 0;

}*/

/* Nasty Hacks
#include <stdio.h>

using namespace std;
int main (){
int n, a, b, c;
scanf("%d", &n);
for( int i = 0; i < n; i ++){
scanf("\n%d", &a);
scanf("%d", &b);
scanf("%d", &c);
if ( b - c > a) {printf("advertise\n"); }
if ( b - c == a) {printf("does not matter\n"); }
if ( b - c < a) {printf("do not advertise\n"); }
}

return 0;
} */
/* Digit Swap
#include <stdio.h>
#include <string.h>

using namespace std;
int main()
{
    char a[100];
    int dem;
    fgets(a, 100, stdin);
    for (int i= 0; i < 1; i++)
    {
        dem = a[1];
        a[1] = a[0];
        a[0] = dem;

    }
    printf("%s", a);
    return 0;
}*/

#include <stdio.h>

using namespace std;
int main ()
{
    int n, h;
    scanf("%d", &n);
    scanf("%d", &h);
    char a[100];
    fgets(a, 100, stdin);
    char k[100];
    fgets(k, 100, stdin);
    printf("%d", h);
    return 0;
    }
