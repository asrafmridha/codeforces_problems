#include <stdio.h>

int main()
{
    int t, x, y, odd = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        if (x > y)
        {
            int newy = x;
            x = y;
            y = newy;
        }

        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
            {
                odd += j;
            }
        }
        printf("%d\n", odd);
        odd=0;
    }
    return 0;
}