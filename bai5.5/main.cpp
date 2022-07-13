#include <stdio.h>
#include <string.h>

using namespace std;

int main()

{

    char s[200];

    int count = 0, c= 0, i, j;



    printf("Please enter a sentence: ");

    scanf("%[^\n]s", s);

    for (i = 0; s[i] != '\0'; i++)

    {

        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] >= '1' && s[i+1] <='9')

            count++;
        if (s[i] == ' ' && s[i+1] != ' ' )

            c++;

    }


    printf("Number of words in given string are: %d\n", c- count + 1);

}
