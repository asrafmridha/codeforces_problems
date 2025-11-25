#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[1000];
    int pair=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++){
            if((a[i]%2==0 && a[j]%2 !=0) || (a[j]%2==0 && a[i]%2 !=0)){
              pair++;
            }
        }
    }
    printf("%d",pair);

    return 0;
}