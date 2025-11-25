#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (q > 0)
    {
        int found = 0, input_value;
        scanf("%d", &input_value);
        for (int i = 0; i < n; i++)
        {
            if (input_value == arr[i])
            {
                found = 1;
            }
        }
        if (found)
        {
            printf("found\n");
        }
        else
        {
            printf("not found\n");
        }

        q--;
    }
}