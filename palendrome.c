#include <stdio.h>

int main()
{
   int a,reverse=0,remainder,b;
   printf("enter a number: ");
   scanf("%d",&a);
   b=a;
   while(a!=0)
   {
       remainder=a%10;
       reverse=reverse*10+remainder;
       a=a/10;
   }
   if(b==reverse)
   {
       printf("%d is a palendrome",b);
   }
   else
   {
       printf("%d is not a palendrome",b);
   }
  
}
