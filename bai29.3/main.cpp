
#include <stdio.h>
#include <stdlib.h>
void NhapMaTran(int **a, int dong, int cot)
{
    int i, j, dem=0;
    for (i = 0; i < dong; i++)
        for (j = 0; j < cot; j++)
        {
            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%d", &a[i][j]);
            if(a[i][j]=0) dem++;
        }
}
void XuatMaTran(int **a, int dong, int cot)
{
    int i, j;
    for (i = 0; i < dong; i++)
    {
        for (j = 0; j < cot; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int **a = NULL, dong, cot;
    int i;
    printf("Please enter value for the matrix A: \n");
    printf("Please enter number of rows: ");
    scanf("%d", &dong);
    printf("Please enter number of columns: ");
    scanf("%d", &cot);

    a = (int **)malloc(dong * sizeof(int *));
    for (i = 0; i < dong; i++)
    {

        a[i] = (int *)malloc(cot * sizeof(int));
    }
    printf("The number of the 0 in the matrix: %d", dem);
    for (i = 0; i < dong; i++)
    {
        free(a[i]);
    }
    // giai phong con trỏ quản lý các dòng
    free(a);
    return 0;
}
