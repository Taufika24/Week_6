#include <stdio.h>
int main()
{
    char s1[10]="Good";
char s2[5]="Day";
int i,j,count1, count2;
printf("Initial strings are");
printf("\n");
for(i=0;s1[i]!='\0';i++)
{
    printf("%c", s1[i]);
}
count1++;
printf("\n");
for(i=0;s2[i]!='\0';i++)
{
    printf("%c", s2[i]);
}
count2++;
printf("\n");
for(j=0;j<count2;j++)
{
    s1[count1]=s2[j];
    count1++;
}
printf("Concatenated string is ");
for(i=0;s1[i]!='\0';i++)
{
    printf("%c", s1[i]);
}
}