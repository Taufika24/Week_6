#include <stdio.h>
int main() 
{
    char ch[20];
    printf("Enter string");
    gets(ch);
    int i,j,count=1,space=0,c=0;
    
    for(i=0;ch[i]!='\0';i++)
    {
       if(ch[i]==' ')
       count++;
    }
    
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            space++;
        }
        
        if(space==(count-1))
            {
                for(j=i+1;ch[j]!='\0';j++)
                {
                    c++;
                }
                break;
            }    
            
    }
    printf("The length of last word is %d",c);
    return 0;
}
