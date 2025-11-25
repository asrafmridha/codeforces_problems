#include <stdio.h>

int main()
{
   long long int t, factorial = 1;
    scanf("%lld", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 1 && n == 0)
        {
            printf("%d ", 1);
            printf("\n");
        }
        else
        {
            for (int j = n; j >= 1; j--)
            {
                factorial *= j;
            }
            printf("%lld\n", factorial);
            factorial = 1;
        }
    }

    return 0;
}