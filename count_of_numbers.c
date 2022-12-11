#include<stdio.h>
void main()
{
    long int a;
    int count=0;
    printf("enter a number\n");
    scanf("%ld",&a);
    do
    {
      a=a/10;
      count=count+1;
      
    }while(a!=0);
    
    printf("the total count of input number is %d",count);
    
}
