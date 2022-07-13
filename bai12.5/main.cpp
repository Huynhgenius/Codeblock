#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100], ch;
  	int i, len, j;

  	printf("Please enter a sentence: ");
  	fgets(str, 100, stdin);

  	printf("Letter to remove: ");
  	scanf("%c", &ch);

	len = strlen(str);
	char h = 34;

    printf("The normalized sentence is %c",h);
  	for(i = 0; i < len ; i++)
	{
		if(str[i] == ch || str[i] == ch - 32 || str[i] == ch + 32)
		{
			for(j = i; j < len ; j++)
			{
				str[j] = str[j + 1];
			}
			printf("%c", str[i]);
			len--;
			i--;

		}
	}
	printf("%c", h);


  	return 0;
}
