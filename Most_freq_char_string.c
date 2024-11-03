#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    char k,maxchar;
    int i,n,max=0;
    int arr[26]={0};
    
    printf("Enter string");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        k=a[i];
        if(k>=97 && k<=122)
        {
            arr[k-97]++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxchar=i+97;
        }
       
    }
    
    printf("The most frequent letter is %c",maxchar);
    
    return 0;
}
