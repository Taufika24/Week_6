#include <stdio.h>
int main() 
{
char s1[10];
char s2[10];
int c1=0,c2=0,i, check=1;
printf("Enter string 1");
gets(s1);
printf("\n");
printf("Enter string 2");
gets(s2);
for(i=0;s1[i]!='\0';i++)
c1++;
for(i=0;s2[i]!='\0';i++)
c2++;
if(c1!=c2)
printf("Strings are not same");
else
{
    for(i=0;i<c1;i++)
    {
        if(s1[i]!=s2[i])
        {
            check=0;
            printf("Strings are not same");
            break;
        }
    }
    if(check==1)
    printf("strings are same");
}
return 0;
}