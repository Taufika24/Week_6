#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    char b[10];
    
    int i,j,n1,n2,check=1;
    char c1,c2;
    printf("Enter 1st string");
    gets(a);
    printf("Enter 2nd string");
    gets(b);
    
    n1=strlen(a);
    n2=strlen(b);
    if(n1!=n2)
    {
        printf("Strings are not isomorphic");
        return 0;
    }
    else
    {
    for(i=0;i<n1;i++)
    {
        c1=a[i];
        c2=b[i];
        for(j=i+1;j<n1;j++)
        {
            if(a[j]==c1)
            {
                if(b[j]!=c2)
                {
                    printf("Strings are not isomorphic");
                    return 0;
                }
            }
        }
        
    }
    }
    printf("Strings are isomorphic");

return 0;
}
