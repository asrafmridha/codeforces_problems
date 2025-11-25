#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= 12; i++)
    {
        int result = 0;
        result = x * i;
        printf("%d * %d = %d \n", x,i,result);
    }
    return 0;
}