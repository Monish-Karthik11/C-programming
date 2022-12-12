#include<stdio.h>
void main()
{
    int n,sum=0,i=1,fact=1,temp,digit;
    printf("enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("%d is a strong number",sum);
    }
    else
    {
        printf("%d is not a strong number",n);
    }
    
}
