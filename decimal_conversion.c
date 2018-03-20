#include<stdio.h>
#include<string.h>

int main()
{
    int n,b,i=0,j,r;
    scanf("%d%d",&n,&b);
    char a[100];
    while(n>0)
    {
        r=n%b;
        n=n/b;
        if(r>=10)
        {
            a[i]=r-10+'A';
        }
        else
        {
            a[i]=r+'0';
        }
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }
       return 0;
}
