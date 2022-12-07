#include<stdio.h>
void main()
{
    int a;
    printf("to find low,high,medium using if statements\n");
    printf("enter a number\n");
    scanf("%d",&a);
    if(a<=4)
    
        printf("value is low");
    
    else if(a<=7&&a>4)
    
        printf("value is medium");
    
    else 
    
        printf("value is high");
    
}
