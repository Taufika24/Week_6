#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    int i,n;
    
    printf("Enter string");
    gets(a);
    
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if (a[i]==' ')
           {
               if(a[i+1]>97)
                a[i+1]=a[i+1]-32;
           }
    }
    
    printf("%s",a);
    return 0;
}
