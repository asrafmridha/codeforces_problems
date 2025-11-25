#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else if (number == 1)
        {
            printf("%d\n", -1);
        }
    }
}