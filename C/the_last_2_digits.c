#include <stdio.h>

int main()
{
     long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c ,&d);

     long long int  result = (a%100)*(b%100)*(c%100)*(d%100);
     long long int lastTwoDigit  =  result % 100;
    printf("%02lld",lastTwoDigit);
    return 0;
}