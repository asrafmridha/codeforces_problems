#include <stdio.h>

int main()
{
    int a, b, c;
    int min, max;
    scanf("%d %d %d", &a, &b, &c);
    //min
    if (a <= b && a <= c)
    {
        min =a;
    }
    else if (b <= a && b <= c)
    {
       min =b;
    }
    else if (c <= a && c <= b)
    {
        min =c;
    }

    //max

     if (a >= b && a >= c)
    {
        max =a;
    }
    else if (b >= a && b >= c)
    {
        max =b;
    }
    else if (c >= a && c >= b)
    {
        max =c;
    }
    printf("%d %d\n", min, max);
    return 0;
}