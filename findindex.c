#include<stdio.h>
int main() 
{
    
   int n,i,j,c=0,index=-1;
   char a[200];
   scanf("%d ",&n);
   scanf("%[^\n]",a);
   char *b=a;
   
   while(sscanf(b,"%d%n",&i,&j)==1)
   {
      if(i==n)
      {
         index=c;
	 break;
      }
      c++;
      b=b+j;
   }
   printf("%d",index);
}
