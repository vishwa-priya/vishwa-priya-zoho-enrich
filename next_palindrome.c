#include<stdio.h>
long int find_palindrome(int a[],int size,long int num)
{
    long int ans=0;
    int p=size/2,q=size/2-1,i=0,j=size-1;
    while(i<j)
    {
        a[j--]=a[i++];   // copy the left half into the right half of the number
    }
    for(i=0;i<size;i++)
    {
        ans=ans*10+a[i];
    }
    while(ans<=num)
    {
        ans=0;
        if(size%2!=0)  // if the number has odd number of digits a single mid position is maintained
        {
            if(a[p]==9)
            {
                a[p]=0;
                a[p-1]++;
                a[p+1]++;  // increment the previous and next digits of the middle digit
        }
            else
            {
                a[p]++;   // increment the middle number 
            }
        }
        else   // if the number has even number of digits the middle two digits are considered 
        {
            if(a[p]==9&&a[q]==9)
            {
                a[p]=a[q]=0;
                a[p+1]++;
                a[q-1]++;  // increment the previous and next digits of the middle digits
            }
            else
            {
                a[p]++;
                a[q]++;   // increment the middle two numbers
            }
        }
        for(i=0;i<size;i++)
        {
            ans=ans*10+a[i];
        }
    }
    return ans;
}
long int next_palindrome(long int num)
{
    int a[10],b[10];
    int i=0,j=0,k,c=0;
    long int num1=num;
    while(num>0)
    {
        a[i]=num%10;
        num=num/10;
        if(a[i]==9)
        {
            c++;
        }
        i++;
    }
    if(c==i)  // if all the digits in the number are 9
    {
        return (num1+2);  // eg: next palindrome of 9999 is 10001
    }
    k=i-1;
    while(j<i)
    {
        b[j++]=a[k--];
    }
    return find_palindrome(b,i,num1);  // returns the next palindrome of the given number
}
int main()
{
    long int num,res;
    scanf("%ld",&num);
    res=next_palindrome(num);
    printf("%ld",res);
    return 0;
}
