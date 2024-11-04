#include <stdio.h>
int main()
{
    char str[50];
    int i,j;
    char k;
    printf("Enter string");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                str[i]='|';
            }
    }
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;str[j+1]!='\0';j++)
        {
            if(str[j]>str[j+1])
            {
                k=str[j];
                str[j]=str[j+1];
                str[j+1]=k;
            }
        }
    }
    
    for(i=0;str[i]!='|';i++)
        printf("%c",str[i]);
return 0;
}
