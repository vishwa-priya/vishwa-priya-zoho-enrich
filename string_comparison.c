#include<stdio.h>
#include<string.h>

void swap(char a[],char b[])
{
  char t[10];
  strcpy(t,a);
  strcpy(a,b);
  strcpy(b,t);
}

int function(char a[],char b[])
{
  int i,j,k;
  for(i=0;i<strlen(a)&&i<strlen(b);i++)
  {
    if(a[i]!=b[i])
    {
      k=i;
      break;
    }
  }
  return k;
}
int main() 
{
  int n,i=0,x=0,y=0,j,k;
  scanf("%d",&n);
  char a[n][10],positive[n][10],negative[n][10];
  for(i=0;i<n;i++)
  scanf("%s",a[i]);
  
  for(i=0;i<n;i++)
  {
    if(a[i][0]=='-')
    {
      strcpy(negative[x++],a[i]);
    }
    else
    {
      strcpy(positive[y++],a[i]);
    }
  }
  
  for(i=0;i<x;i++)
  {
    for(j=i+1;j<x;j++)
    {
      if(strlen(negative[i])==strlen(negative[j]))
      {   
        k=function(negative[i],negative[j]);
        if(negative[i][k]<negative[j][k])
        {
          swap(negative[i],negative[j]);
        }
      }
      else if(strlen(negative[i])<strlen(negative[j]))
      {
        swap(negative[i],negative[j]);
      }
    }
  }
  for(i=0;i<y;i++)
  {
    for(j=i+1;j<y;j++)
    {
      if(strlen(positive[i])==strlen(positive[j]))
      {   
        k=function(positive[i],positive[j]);
        if(positive[i][k]>positive[j][k])
        {
          swap(positive[i],positive[j]);
        }
      }
      else if(strlen(positive[i])>strlen(positive[j]))
      {
        swap(positive[i],positive[j]);
      }
    }
  }
  
  for(i=0;i<x;i++)
  {
    printf("%s ",negative[i]);
  }
  for(i=0;i<y;i++)
  {
    printf("%s ",positive[i]);
  }
    
}
