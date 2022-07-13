/* Filip
#include <stdio.h>


using namespace std;

int main()
{
    int i, n;
    scanf("%d", &i);
    scanf("%d", &n);
    int a=i%10*100 + (i%100-i%10)  + i/100;
    int b=n%10*100 + (n%100-n%10)  + n/100;
    if ( a > b)  printf("%d", a);
    if ( b > a) printf("%d", b);
return 0;
}*/
/* 	Eye of Sauron
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{

    char h[1000];
    int dem1 =0, dem2=0;
    int i =0, j= strlen(h);
    fgets(h, 1000, stdin);
    for (int i = 0; h[i] != '('; i++)
    {
        if (h[i] != '('){
        dem1 ++;
        if (h[i] == '(') break;
        }
    }

    for (int j = strlen(h)-2;h[j] != ')'; j--)
    {
        if (h[j] != ' )'){
        dem2++;
        if (h[j] == ')') break;
        }
    }

    if (dem1 == dem2) printf("correct");
    if (dem1 != dem2) printf("fix");
    return 0;
}
*/

/* Jumbo Javelin
#include <stdio.h>

using namespace std;

int main()
{
    int n, h, sum = 0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d", &h);
        sum+= h;
    }
    printf("%d", sum + 1 -n);
    return 0;
} */
/*
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int n;
    char h[100];
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        scanf("%s", h);
     if (!(i & 1))
        {
            printf("%s\n", h);
        }
    }
    return 0;
}

*/

#include <stdio.h>


using namespace std;

int main()
{
    int i, n, h;
    int dem = 0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &h);
        if (h<0) dem++;
    }

printf("%d", dem);
return 0;
}





