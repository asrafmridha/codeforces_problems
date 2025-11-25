#include <stdio.h>

void printArr(int n, int arr[])
{
    if (n < 0)
        return;
    printArr(n - 1, arr);
    printf("%d\n", arr[n]);
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
    printArr(n - 1, arr);

    return 0;
}