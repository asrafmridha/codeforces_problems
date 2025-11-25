#include <stdio.h>

int main()
{
    int n, input_value, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &input_value);
        if ( input_value %2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
        if (input_value >= 1 )
        {
            positive += 1;
        }
        else if(input_value < 0)
        {
            negative += 1;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}