#include<stdio.h>
int is_set(int a,int b)
{
    if(a&(1<<b))
    {
        return 1;
    }
    return 0;
}
void generate_subset(int a[],int n)
{
    int i,j,no_of_sets=1;
    for(i=0;i<n;i++)  // find the number of sets that can be generated
    {
        no_of_sets*=2;
    }
    for(i=1;i<no_of_sets;i++)   //leave the null set
    {
        for(j=0;j<n;j++)
        {
            if(is_set(i,j))  //check if the j th bit is set in i
            {
                printf("%d ",a[j]);
            }
        }
        printf("\n");
    }
    
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    generate_subset(a,n);
    return 0;
   
}
