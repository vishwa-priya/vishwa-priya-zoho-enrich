#include<stdio.h>
int main()
{
   int size,i,j;
   scanf("%d",&size);
   int a[size],count[size];
   for(i=0; i<size; i++)
   {
      scanf("%d",&a[i]);
   }

   for(i=0; i<size; i++)
   {
      if(a[i]!=-1)
      {
         count[i]=1;
         for(j=i+1; j<size; j++)
         {
            if(a[i]==a[j])
            {
               count[i]++;
               a[j]=-1;
            }
         }
      }
   }

   for(i=0; i<size; i++)
   {
      if(a[i]!=-1)
      {
         printf("%d ---> %d\n",a[i],count[i]);
      }
   }
   return 0;
}   
   