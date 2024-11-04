#include <stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter string");
    gets(str);
    
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<90)
        {
            printf("The first capital letter is %c",str[i]);
            break;
        }
    }
    
return 0;
}
