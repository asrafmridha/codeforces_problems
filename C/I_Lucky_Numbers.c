#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mod = n % 10;
    int division = n / 10;
    if(division==0 || mod==0){
        printf("NO");
    }
    else if (division % mod == 0 || mod % division == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}