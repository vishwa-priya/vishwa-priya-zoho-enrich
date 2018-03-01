#include<stdio.h>
int mod(int n)
{
   int x;
   while(n>0)
   {
      n-=2;
      x=n;
   }
   return x;
}
void main()
{
   int n,r,count=0;
   scanf("%d",&n);

   while(n>0)
   {
	r=mod(n);
	if(r!=0)
	{
		count++;
	}
	n=n/2;
   }
   printf("%d",count);
}