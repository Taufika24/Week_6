#include <stdio.h>
int main()
{
  char a[10];
char b[10];
int i, j, count=0, check=1;
char k;
printf("Enter the string");
gets(a);
for(i=0; a[i]!='\0'; i++) 
{
    count++;
    b[i] = a[i];
}
printf("\n");
for(j=0; j<count/2; j++) 
{
    k=a[j];
    a[j]=a[count-j-1];
    a[count-j-1]=k;
}
for(i=0; a[i]!='\0'; i++)
{
    if(a[i]!=b[i]) 
    {
        check=0;
        printf("Not a palindrome");
        break;
    }
}
if(check==1) {
    printf("Palindrome");
    return 0;
}
}