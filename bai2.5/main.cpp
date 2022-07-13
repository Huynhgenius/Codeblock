#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int vowels, consonant, digit, space;
    vowels = consonant = digit = space = 0;
    char c[100]z
    char ch[100];
    printf("Please enter a sentence: ");
    fgets (ch, 100, stdin);
    for(int i=0; ch[i]!=0; i++)
    {
        ch[i] = tolower(ch[i]);

        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' ||
                ch[i] == 'o' || ch[i] == 'u')
        {

            ++vowels;
        }

        else if ((ch[i] >= 'a' && ch[i] <= 'z'))
        {
            ++consonant;
        }

        else if (ch[i] >= '0' && ch[i] <= '9')
        {
            ++digit;
        }

        else if (ch[i] == ' ')
        {
            ++space;
        }
    }
    printf("The number of     vowel alphabets is %d",vowels);
    printf("\nThe number of consonant alphabets is %d",consonant);

    return 0;

}
