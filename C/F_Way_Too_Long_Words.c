#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {

        char s[101];
        scanf("%s", &s);
        int length = strlen(s);
        if (length > 10)
        {
            char first = s[0];
            char second = s[length - 1];

            length = strlen(s) - 2;

            printf("%c%d%c", first, length, second);
        }
        else
        {
            for (int i = 0; i < length; i++)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}