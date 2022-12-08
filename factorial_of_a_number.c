#include<stdio.h>
void main()
{
    int i,fact=1,n;
    printf("to find factorial of a number\n");
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
}
