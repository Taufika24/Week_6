#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10];
    char str2[10];
    
    int i,j,n1,n2,check;
    printf("Enter 1st name");
    gets(str1);
    printf("Enter 2nd name");
    gets(str2);
    
    n1=strlen(str1);
    n2=strlen(str2);
    if(n2>n1)
    {
        printf("We cannot get 2nd name from the 1st");
        return 0;
    }
    else
    {
    for (i=0;i<n2;i++)
    {
        check=0;
        for(j=0;j<n1;j++)
        {
        if(str2[i]==str1[j])
        {
            check=1;
            str1[j]=' ';
            break;
        }
        }
    }
    if(check==1)
        printf("We can get the 2nd name from the 1st");
    else
        printf("We cant get the 2nd name from the 1st");
    }
return 0;
}
