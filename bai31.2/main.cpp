#include <stdio.h>
using namespace std;


int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = i; j >= 1; --j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
