#include<stdio.h>
void main()
{
   int n,r,c=0;
   scanf("%d",&n);

   while(n>0)
   {
	r=n%2;
	if(r==1)
	{
		c++;
	}
	n=n/2;
   }
   printf("%d",c);
}