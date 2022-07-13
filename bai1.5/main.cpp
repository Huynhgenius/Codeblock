#include <stdio.h>

using namespace std;

int main()
{
    char nhap(50);

    fgets(nhap, sizeof(nhap), stdin);
    printf("Please enter a sentence: \n");
    puts(nhap);    //
    printf("The number of lowercase alphabets is ");
    return 0;
}
