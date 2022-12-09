#include <stdio.h>
void main()
{
    int a=0,b=1,c=0,i=1,n;
    printf("pgm to find fibonacci series of a given number\n");
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
