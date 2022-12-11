#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
      i=n%10;
      sum=sum+(i*i*i);
      n=n/10;
    }
    printf("amstrong number is %d",sum);
}
