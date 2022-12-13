#include <stdio.h>
void main()
{
    int a,b,lcm;
    printf("enter a and b value\n");
    scanf("%d\n%d",&a,&b);
    lcm=(a<b) ? a : b ;
    while(1)
    {
        if(lcm%a==0&&lcm%b==0)
        {
            break;
        }
        lcm++;
    }
    printf("%d is the lcm of two numbers",lcm);
    
}
