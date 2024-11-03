#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    char k;
    int i,pos,n;
    
    printf("Enter string");
    gets(a);
    printf("Enter character to be inserted");
    scanf("%c",&k);
    printf("Enter position to be entered");
    scanf("%d",&pos);
    
    n=strlen(a);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=k;
    
    printf("%s",a);
    return 0;
}
