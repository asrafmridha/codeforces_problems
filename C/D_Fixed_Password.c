#include <stdio.h>

int main()
{
    int input_value;

    while (scanf("%d", &input_value))
    {
        if (input_value == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}