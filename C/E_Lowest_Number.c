#include <stdio.h>

int main()
{
    int n, lowest_value = 0, index = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    lowest_value = a[0];
    for (int i = 0; i < n; i++)
    {
        
        if (a[i] < lowest_value)
        {
            lowest_value = a[i];
            index = i+1;
        }
    }
    printf("%d %d", lowest_value, index);
    return 0;
}