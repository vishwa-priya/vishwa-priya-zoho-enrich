#include<stdio.h>
#include<string.h>
void main()
{
   long int num;
   int t,i=0,j=0,k,n[10],n1[10];
   scanf("%ld %d",&num,&t);


   while(num>0)
   {
       n[i++]=num%10;
       num=num/10;
   }
   
   k=i-1;
   for(j=0;j<i;j++)
   {
      n1[j]=n[k--];
   }
   for(j=t%i;j<i;j++)
   {
      printf("%d",n1[j]);
   }
   for(j=0;j<t%i;j++)
   {
      printf("%d",n1[j]);
   }
}


       
   
   

  
