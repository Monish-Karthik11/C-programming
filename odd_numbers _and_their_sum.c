#include<stdio.h>
void main()
{
    int i,n,sum=0,a;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   
      a=2*i+1;
      printf(" %d ",a);
      sum=sum+a;
    }
    printf("\nsum of all odd numbers %d",sum);
}
