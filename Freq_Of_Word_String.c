#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    int i,n,count=0;
    
    printf("Enter string");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='t' && a[i+1]=='h' && a[i+2]=='e' && a[i+3]==' ')
            count++;
    }
    
    printf("The number of times \'the\' occurs is %d",count);
    
    return 0;
}
