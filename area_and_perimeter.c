#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("to find area and perimeter of triangle\n");
    printf("enter 1 for area of tringle or 2 for perimeter triangle\n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:printf("enter a,b value\n");
        scanf("%d%d",&a,&b);
        printf("area of triangle is %d",a*b);
        break;
        
        case 2:printf("enter a,b and c value\n");
        scanf("%d%d%d",&a,&b,&c);
        printf("perimeter of triangle %d",a+b+c);
        break;
        
        default :printf("invalid");
    }
    
}
