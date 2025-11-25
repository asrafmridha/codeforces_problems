#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[1000], b[1000], result[1000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        result[i] = a[i] + b[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", result[i]);
    }

    return 0;
}