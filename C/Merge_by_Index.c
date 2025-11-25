#include <stdio.h>
#include <string.h>

int main() {
    char s1[2000], s2[1000];
    int start, end;

    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%d %d", &start, &end);

    char temp[1000];
    int i, j = 0;
    for (i = start; i <= end; i++) {
        temp[j++] = s2[i];
    }
    temp[j] = '\0'; 

    strcat(s1, temp);

    printf("%s\n", s1);

    return 0;
}