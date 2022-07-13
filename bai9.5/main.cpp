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
    char s[100];
    if(ch[0]!=' ' && ch[0] >=97)
    {
        s[0]=ch[0]-32;

    }
    else
    {

        s[0]=ch[0];
    }

    for( i = 1; i < strlen(ch) -1; i++)
    {
        s[i] = ch[i];
        if(ch[i] == ' ' && ch[i+1] != ' ' && ch[i+1] >= 97)
        {
            s[i+1] = ch[i+1] - 32;
            i++;
            if (ch[i] < 97)
            {
                s[i]=ch[i] +32;
            }

        }
    }

    printf("%s",s);
    printf("%c", h);
    return 0;

}
