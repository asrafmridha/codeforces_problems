#include <stdio.h>

void mello()
{
    printf("mello\n");
}
void gello()
{
    printf("gello\n");
    mello();
}
void hello()
{
    printf("hello\n");
    //Call Same Function.
    hello();
}
int main()
{
    hello();
    return 0;
}