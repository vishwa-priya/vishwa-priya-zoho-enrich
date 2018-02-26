#include<stdio.h>
#include<string.h>
void main()
{
   char num[20],c;
   int t,i,j;
   scanf("%s",num);
   scanf("%d",&t);
   int l=strlen(num);

   for(i=0; i<t; i++)
   {
       c=num[0];
       for(j=0;j<l-1;j++)
            num[j]=num[j+1];
        num[l-1]=c;
   }

   printf("%s",num);
}