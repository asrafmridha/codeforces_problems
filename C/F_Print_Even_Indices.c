#include <stdio.h>

void printEvenIndices(int n, int arr[])
{

    if (n < 0)
    {
        return;
    }
    if (n == 0 || n % 2 == 0)
    {
        printf("%d ", arr[n]);
    }
    printEvenIndices(n - 1, arr);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printEvenIndices(n - 1, arr);

    return 0;
}