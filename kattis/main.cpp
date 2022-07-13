#include <stdio.h>

int factors(int k)
{
    int factors = 0;
    int factor = 2;
    while (factor*factor <= k)
    {
        if (k % factor == 0)
        {
            k/= factor;
            factors++;
        }
        else
        {
            factor++;
        }
    }
    return factors + 1;
}

int main()
{
    int k;
    scanf("%d", &k);
    printf("%d", factors(k));
    return 0;
}
