#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("sum of n natural numbers\n");
    printf("enter a natural number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
        
    }
    printf("sum of n natural number %d",sum);
}
