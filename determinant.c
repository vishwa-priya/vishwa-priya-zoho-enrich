#include<stdio.h>
int main()
{
   int n,i,j,k;
   scanf("%d",&n);
   float m[n][n],temp,d=1;
   for(i=0; i<n; i++)
   {
      for(j=0; j<n; j++)
      {
         scanf("%f",&m[i][j]);
      }
   }

   for(i=0; i<n; i++)
   {
      for(j=0; j<n; j++)
      {
         if(i<j)
         {
            temp=m[j][i]/m[i][i];
            for(k=0; k<n; k++)
            {
               m[j][k]=m[j][k]-temp*m[i][k];
            }
         }
      }
   }
   for(i=0; i<n; i++)
   {
      d=d*m[i][i];
   }
   printf("%d",(int)d);
   return 0;
}
  