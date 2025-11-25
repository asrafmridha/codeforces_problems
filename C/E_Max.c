#include <stdio.h>

int main()
{
    int n, input_value, max = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &input_value);
        if (max < input_value)
        {
            max = input_value;
        }
    }
    printf("%d", max);
    return 0;
}