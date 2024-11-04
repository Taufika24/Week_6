#include <stdio.h>
int main()
{
    char str[20];
    int a[26]={0};
    int i,j,k;
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
        printf(" The frequency of %c is %d \n",i+65,a[i]);
return 0;
}
