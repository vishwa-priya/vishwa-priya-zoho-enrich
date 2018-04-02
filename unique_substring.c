#include<stdio.h>
#include<string.h>
int check_duplicate(char *s,int a,int b)
{
    int i,j;
    for(i=a;i<=b;i++)
    {
        for(j=i+1;j<=b;j++)
        {
            if(s[i]==s[j])
            {
                return 0;
            }
        }
    }
    return 1;
}

void unique_substring(char *a)
{
    int i=0,j=0,start=0,end=0,max=0;
    while(1)
    {
        if(j-i+1>max)
        {
            max=j-i+1;
            start=i;
            end=j-1;
        }
        if(j==strlen(a))
        {
            break;
        }
        if(check_duplicate(a,i,j))
        {
            j++;
        }
        else
        {
           i++;
           j=i;
        }
    }
   for(i=start;i<=end;i++)
   {
        printf("%c",a[i]);
   }
}

int main() 
{
   char s[100];
   scanf("%s",s);
   unique_substring(s);
   return 0;
}
