#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;


int main()
{
    int upper=0, dem =0, dem1=0;
    char h[1], c[1], k[1];
    char ch[100];
    printf("Please enter a sentence: ");
    fgets (ch, 100, stdin);
    printf("Letter to find: ");
    scanf("%c", &h[1]);
    if (h[1] >= 'a' && h[1]<= 'z')
    {
        c[1]=h[1]-32;
        for(int i=0; ch[i]!='\0'; i++)
        {
            if(ch[i] == h[1] || ch[i] == c[1])
            {
                upper++;
            }

        }
        if (upper > 0 )
        {
            printf("The letter '%c' appears %d times in the entered sentence in the indexes: \n", h[1], upper );
            if (h[1] >= 'a' && h[1]<= 'z')
            {
                c[1]=h[1]-32;
                for(int i=0; ch[i]!='\0'; i++)
                {
                    if(ch[i] == h[1]|| (ch[i] == c[1]))
                    {
                        ++ dem;
                        if ( dem > 1) {
                        printf(", [%d]", i+1);
                        } else {
                        printf("[%d]", i+1);
                        }


                    }

                }
            }
        }
        else
        {
            printf("The character '%c' was not found in the entered sentence in the indexes: \n ", h[1]);
        }
    }
    else if (h[1] >= 'A' && h[1] <= 'Z')
    {
        k[1] = h[1] + 32;
        for(int i=0; ch[i]!='\0'; i++)
        {
            if(ch[i] == h[1] || (ch[i] == c[1] ))
            {
                upper++;
            }

        }
        if (upper  > 0 )
        {
            printf("The letter '%c' appears %d times in the entered sentence", h[1], upper );
            if (h[1] >= 'a' && h[1]<= 'z')
            {
                c[1]=h[1]-32;
                for(int i=0; ch[i]!='\0'; i++)
                {
                    if(ch[i] == h[1] || (ch[i] == c[1]))
                    {
                        ++ dem1;
                        if ( dem1 > 1) {
                        printf(", [%d]", i+1);
                        } else {
                        printf("[%d]", i+1);
                        }

                    }

                }
            }
        }
        else
        {
            printf("The character '%c' was not found in the entered sentence ", h[1]);
        }

    }

    else
        printf("Character '%c' is not a letter. Accept letter only!", h);
    return 0;

}
