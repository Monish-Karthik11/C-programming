#include <stdio.h>
void main()
{
    int a,b,lcm,y,i;
    printf("enter a and b value\n");
    scanf("%d\n%d",&a,&b);
    if(a>b)
    lcm=b;
    else
    lcm=a;
    for(i=1;i<=lcm;i++)
    {
        if(a%i==0&&b%i==0)
        {
            y=i;
        }
    }
    printf("gcd of two numbers is %d",y);
    
}
