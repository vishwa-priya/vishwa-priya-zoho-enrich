#include<stdio.h>
int main() 
{
  int n,i,j,x,y;
  scanf("%d",&n);
  int a[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      a[i][j]=0;
    }
  }
  int c=1;
  i=0;
  j=n/2;
  a[i][j]=c++;
  while(c<=(n*n))
  {
    x=(i-1+n)%n;
    y=(j+1+n)%n;
    if(a[x][y]==0)
    {
      i=x;
      j=y;
      a[i][j]=c++;
    }
    else
    {
      while(a[i][j]!=0)
      {
        i++;
      }
      a[i][j]=c++;
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
