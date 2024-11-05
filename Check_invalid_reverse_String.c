#include <stdio.h>
#include <ctype.h>
int main() 
{
    char ch[20];
    printf("Enter string");
    gets(ch);
    int i,j,check=1, count = 0;
    char k;
    
    for(i=0;ch[i]!='\0';i++)
    {
        if(isalpha(ch[i]))
        ;
        else
        {
            check=0;
            printf("Invalid string");
            break;
        }
    }
    
    if (check==1)
    {
    for (i = 0; ch[i] != '\0'; i++) {
        count++;
    }
    for (j = 0; j < count / 2; j++) {
        k = ch[j];
        ch[j] = ch[count - j - 1];
        ch[count - j - 1] = k;
    }
    for (i = 0; ch[i] != '\0'; i++) 
    {
        printf("%c", ch[i]);
    }
    }
    return 0;
}
