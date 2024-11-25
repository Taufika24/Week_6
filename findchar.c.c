#include <stdio.h>
int main() 
{
    char ch[20];
    int i, c = 0, count = 0;
    char k;
    printf("Enter string");
    gets(ch);
    printf("Enter character to be found");
    scanf("%c", &k);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == k)
        {
            c = 1;
            printf("Character found at index ");
            printf("%d", i);
            break;
        }
    }
    if (c == 0) 
    {
        printf("Character not found");
    }
    return 0;
}