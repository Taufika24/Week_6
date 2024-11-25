#include <stdio.h>
int main()
{
    char s1[20] = "Hello";
    char s2[10] = "abc";
    int i, j, count;
    printf("Text in string 1 is ");
    for (i = 0; s1[i] != '\0'; i++) {
        printf("%c", s1[i]);
        count++;
    }
    printf("\n");
    for (i = 0; i < count; i++) {
        s2[i] = s1[i];
    }
    printf("Text in string 2 is ");
    for (i = 0; i < count; i++) {
        printf("%c", s2[i]);
    }
    return 0;
}