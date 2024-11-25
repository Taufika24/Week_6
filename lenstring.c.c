#include <stdio.h>
int main() {
    char ch[] = "hello";
    int i, count = 0;
    for (i = 0; ch[i] != '\0'; i++) {
        printf("%c", ch[i]);
        count++;
    }
    printf("\n");
    printf("Length of string is %d", count);
    return 0;
}