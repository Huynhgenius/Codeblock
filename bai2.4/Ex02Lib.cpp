#include<math.h>
    int isAmstrong(int num)
    {
        int rem, n = 0, temp;
        float sum = 0.0;

        temp = num;

        while(temp)
        {
            temp = temp / 10; // dem coi so co bao nhieu chu so
            n++;

        while(num)
        {
            rem = num % 10; // 317 chia 10 con 7   1
            sum = sum + pow(rem, n); //0 + 7 mu 7 1 = 7
            num = num / 10; // 31
        }

        return(sum);
    }
