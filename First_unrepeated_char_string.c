#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i,j,n,check;
    printf("Enter string");
    gets(str);
    
    n= strlen(str);
    
    for(i=0;i<n;i++)
    {
        check=1;
       for(j=0;j<n;j++)
       {
           if(i!=j)
           {
               if (str[i]==str[j])
               {
                   check=0;
                   break;
               }
           }
       }
       if(check==1)
       {
           printf("The first unrepeated character is %c",str[i]);
           break;
       }
    }
    
return 0;
}
