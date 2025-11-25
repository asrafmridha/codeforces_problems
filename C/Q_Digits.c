#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int input_value;
        scanf("%d", &input_value);
        if (input_value == 0)
        {
            printf("%d ", 0);
            printf("\n");
        }
        else
        {
            while (input_value != 0)
            {
                int mod = input_value % 10;
                printf("%d ", mod);
                input_value /= 10;
            }
            printf("\n");
        }
    }
    return 0;
}