    #include<stdio.h>
    #include<math.h>
    #include "Ex02Lib.h"

    int isAmstrong(int n);

    int main()
    {   int dem = 0;
        int count;
        printf("All Amstrong number are: ");
        for(count = 100; count <= 999; count++)
        {
            if(count == isAmstrong(sum))// qua kia num = count
            {   dem ++;
                if (dem > 1) printf(", %d", count);
                else printf("%d", count);
            }
        }

        return 0;
    }



