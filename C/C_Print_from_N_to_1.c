#include <stdio.h>

void printNtoOne(int i)
{
    if (i < 1)
    {
        return;
    }
    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d ", i);
    }

    printNtoOne(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printNtoOne(n);

    return 0;
}