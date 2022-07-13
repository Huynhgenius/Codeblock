#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

int main()
{
    int i;
    char ch[100];
    printf("Please enter a sentence: ");
    fgets (ch, 100, stdin);
    char h(34);
    printf("The normalized sentence is ");
    printf("%c", h);
    int k = strlen(ch) - 1;
    do
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i] = ch[i] - 32;
        }
        else if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]=ch[i];
        }
        printf("%c", ch[i]);
        i++;

    }
    while (i<k);
    printf("%c", h);
    return 0;

}
