#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[100],vowel[5]={'a','e','i','o','u'};
   int count[5]={0},i;
   scanf("%[^\n]",str);

   for(i=0; i<strlen(str); i++)
   {
      if(tolower(str[i])=='a')
      {
         count[0]++;
      }
      if(tolower(str[i])=='e')
      {
         count[1]++;
      }
      if(tolower(str[i])=='i')
      {
         count[2]++;
      }
      if(tolower(str[i])=='o')
      {
         count[3]++;
      }
      if(tolower(str[i])=='u')
      {
         count[4]++;
      }
   }
   
   for(i=0; i<5; i++)
   {
      if(count[i]!=0)
      {
         printf("%c ---> %d\n",vowel[i],count[i]);
      }
   }
   return 0;
}

      