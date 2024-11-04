#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10];
    char str2[10];
    
    int i,j,n1,n2,check=1;
    char k;
    printf("Enter 1st string");
    gets(str1);
    printf("Enter 2nd string");
    gets(str2);
    
    n1=strlen(str1);
    n2=strlen(str2);
    if(n1!=n2)
    {
        printf("Strings are not anagrams");
        return 0;
    }
    else
    {
    for(i=0;i<n1;i++)
    {
        for(j=0;j+1<n1;j++)
        {
            if(str1[j]>str1[j+1])
            {
                k=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=k;
            }
        }
    }
    
    for(i=0;i<n2;i++)
    {
        for(j=0;j+1<n2;j++)
        {
            if(str2[j]>str2[j+1])
            {
                k=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=k;
            }
        }
    }
    
    for (i=0;i<n1;i++)
    {
        if(str1[i]!=str2[i])
        {
            check=0;
            printf("Not anagrams");
            break;
        }
    }
    
    if(check==1)
        printf("Anagrams");
    }

return 0;
}
