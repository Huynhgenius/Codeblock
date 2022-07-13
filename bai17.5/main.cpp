#include <stdio.h>
#include <ctype.h>
#include<string.h>

using namespace std;

int main()
{
    char hoten[80];
    printf("Please enter your full name: ");
    fgets (hoten, 100, stdin);
    char *token;
    token = strtok(hoten, " ");// tach chuoi thanh cac chu giua cac ky tu dac biet
    int c=0;
    char mang[5][100];
    while( token != NULL )
    {
        strcpy(mang[c],token); // copy noi dung cua token
        c++;
        token = strtok(NULL, " ");
    }
    printf("The first name is %s\n",mang[0]);
    printf("The middle name is ");
    for(int i=1; i<c-1; i++)
    {
        printf("%s ",mang[i]);
    }
    printf("\nThe last name is %s",mang[c-1]);
    return(0);
}
