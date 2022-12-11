#include <stdio.h>
int main()
{
int a,sum=0,b;
printf("enter a number: ");
scanf("%d",&a);
while(a>0)
{
    b=a%10;
    sum=sum+b;
    a=a/10;
}
printf("sum of all the digits is %d",sum);

}
