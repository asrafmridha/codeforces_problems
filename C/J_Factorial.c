#include <stdio.h>

unsigned long long factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return  number* factorial(number-1);
}
int main()
{
    int number;
    scanf("%d", &number);
    unsigned long long f = factorial(number);
    printf("%llu\n", f);

    return 0;
}