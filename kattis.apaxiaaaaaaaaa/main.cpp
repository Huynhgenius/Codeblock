#include <stdio.h>
#include <string.h>


using namespace std;

int main()
{
    char s[100000];

    fgets(s, 100, stdin);

    for(int i = 0; i < strlen(s) - 1 ; i++)
	{
		if(s[i] != s[i+1])
		{

			printf("%c", s[i]);

		}
	}


    return 0;
}


