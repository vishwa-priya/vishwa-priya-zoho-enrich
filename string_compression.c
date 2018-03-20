#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    scanf("%s",a);
    int i=0,c;
    while(i<strlen(a))
    {
       c=1;
       while(a[i]==a[++i])
       {
           c++;
       }
       if(c>1)
       {
           printf("%c%d",a[i-1],c);
       }
       else
       {
           printf("%c",a[i-1]);
       }
    }
    return 0;
}
