#include <stdio.h>
int main()
{
    char str[50];
    int a[26]={0};
    int i,k,check=1;
    printf("Enter string");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            k=str[i]-65;
            a[k]++;
        }
          
        if(str[i]>=97 && str[i]<=122)
        {
            k=str[i]-97;
            a[k]++;
        }
    }
    
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            check=0;
            break;
        }
    }
    if(check==1)
        printf("String is a pangram");
    else
        printf("string is not a pangram");
return 0;
}
