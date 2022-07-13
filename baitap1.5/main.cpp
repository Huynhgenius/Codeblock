#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i;
    int upper=0,lower=0, d=0;
    char ch[100];
    printf("Please enter a sentence: ");
    fgets (ch, 100, stdin);
    for(i=0; ch[i]!=0; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            upper++;
        }
        else if(ch[i]>='a' && ch[i]<='z')
        {
            lower++;
        }
        else if(ch[i] >= '1' && ch[i] <= '9')
        {
            d++;
        }
    }
    printf("The number of uppercase alphabets is %d",upper);
    printf("\nThe number of lowercase alphabets is %d",lower);
    printf("\nThe number of digits              is %d", d);
    return 0;

}
