#include <stdio.h>
#include <ctype.h>
int main() 
{
    char ch[20];
    printf("Enter string");
    gets(ch);
    int i=0,j,k,count=0,max=0;
    char maxc;
    int a[26]={0};
    
    for(i=1;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i-1])
        {
            count++;
            k=ch[i]-97;
            if(count>a[k])
            a[k]=count;
        }
        else
            count=1;
    }
    
    for(j=0;j<26;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
            maxc=j+97;
        }
    }
    printf("The biggest chunk is %c with count %d",maxc,max);
    return 0;
}
