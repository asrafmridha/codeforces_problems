#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    fgets(s,15,stdin);
    int arrlength = strlen(s);

    int i = 0;
    int j = arrlength - 1;
    while (i < j)
    {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;

        i++;
        j--;
    }

    for (int i = 0; i < arrlength; i++)
    {
        printf("%c", s[i]);
    }
}