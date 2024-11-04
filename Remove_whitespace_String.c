#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i,j=0,n;
    printf("Enter string");
    gets(str);
    
    n= strlen(str);
    char newstr[n];
    
    for(i=0;i<n;i++)
    {
       if(str[i]!=' ')
       {
           newstr[j++]=str[i];
       }
    }
    
    for(i=0;newstr[i]!='\0';i++)
        printf("%c",newstr[i]);
return 0;
}
