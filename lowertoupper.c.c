#include <stdio.h>
int main() 
{
    char ch[] = "hello";
    int i, count = 0;
    for (i = 0; ch[i] != '\0'; i++) 
    {
        printf("%c", ch[i]);
        count++;
    }
    printf("\n");
    for (i = 0; ch[i] != '\0'; i++)
 {
        printf("%c", ch[i] - 32);
        count++;
    }
    return 0;
}