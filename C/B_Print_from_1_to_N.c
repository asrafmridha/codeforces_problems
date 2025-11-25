#include <stdio.h>

void printOneToN(int i)
{
    if (i < 1)
    {
        return;
    }
    printOneToN(i - 1);
        printf("%d\n", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    printOneToN(n);

    return 0;
}