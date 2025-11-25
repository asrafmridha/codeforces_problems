#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = n - 1, match = 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            match = 0;
        }
        i++;
        j--;
    }
    if (match)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}