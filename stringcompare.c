#include<stdio.h>
#include<string.h>
long int str_to_int(char s[])
{
    int i=0,j;
    long int n=0;
    if(s[0]=='-')
    {
       i=1;
    }
    for(j=i;j<strlen(s);j++)
    {
       n=n*10+s[j]-'0';
    }
    if(s[0]=='-')
    {   
      return -n;
    }
    return n;
}
int main() 
{
  int n,i,j;
  char t[10];
  scanf("%d",&n);
  char a[n][10];
  for(i=0;i<n;i++)
  {
     scanf("%s",a[i]);
  }
  for(i=0;i<n;i++)
  {
      long int x=str_to_int(a[i]);
      for(j=i+1;j<n;j++)
      {
         long int y=str_to_int(a[j]);  
         if(x>y)     
         {
            strcpy(t,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],t);
         }
      }
   }
   for(i=0;i<n;i++)
   {
      printf("%s ",a[i]);
   }
}
     
   
