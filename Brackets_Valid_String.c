#include <stdio.h>
int main()
{
    char str[50];
    int i,open=0,close=0;

    printf("Enter string");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]=='(' || str[i]=='[' || str[i]=='{' || str[i]=='<')
        open++;
        
        if(str[i]==')' || str[i]==']' || str[i]=='}' || str[i]=='>')
        close++;
    
    }
    
    if(open==close)
        printf("String is valid");
    else
        printf("String is not valid");
return 0;
}
