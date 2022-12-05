#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("enter the operation\n");
    scanf("%c",&c);
    printf("enter a and b values\n");
    scanf("%d %d",&a,&b);
    switch(c)
    {
        case '+':printf("%d",a+b);
        break;
        
        case '-':printf("%d",a-b);
        break;
        
        case '*':printf("%d",a*b);
        break;
        
        case '/':printf("%d",a/b);
        break;
        
        default:printf("invalid");
        
    }
}
