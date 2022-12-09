#include <stdio.h>
void main()
{
    int i,count=0,n;
    printf("to find prime factor\n");
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count=count+1;
        }
    }
    if(count==2)
    {
        printf("it is a prime number");
        
    }
    else
    {
        printf("not a prime number");
    }
}
