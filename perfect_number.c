#include <stdio.h>
void main()
{
 int a,sum=0,i=1;
 printf("enter a number: ");
 scanf("%d",&a);
 while(i<a)
 {
    if(a%i==0)
    {
        sum=sum+i;
        
    }
    i++;
 }
    if(sum==a)
    {
        printf("%d is a perfect number",sum);
    }
    else
    {
        printf("%d is not a perfect number",sum);
    }
 
 
}
