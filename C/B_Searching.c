#include <stdio.h>

int main()
{
    int n, search_value;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &search_value);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == search_value)
        {
            printf("%d", i);
            found = 1;
            break;
        }
    }
     if (!found)
    {
        printf("%d", -1);
    }

    return 0;
}