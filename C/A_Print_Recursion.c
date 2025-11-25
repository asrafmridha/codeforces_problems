#include <stdio.h>

void printLoveRecursion(int n)
{
    if (n < 0){
        return;
    }
    printLoveRecursion(n - 1);
    printf("I love Recursion\n");
    
}
int main()
{
    int n;
    scanf("%d", &n);
    printLoveRecursion(n - 1);

    return 0;
}