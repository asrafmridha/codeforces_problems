#include <stdio.h>

int main()
{
    int n, input, sumPositive = 0, sumNegative = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &input);
        for (int i = 0; i <= input; i++)
        {
            if (i % 2 == 0)
            {
                sumPositive += input;
            }
            else
            {
                sumNegative += input;
            }
        }
    }
    printf("%d %d",sumPositive,sumNegative);

    return 0;
}