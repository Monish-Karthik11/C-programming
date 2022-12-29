#include <stdio.h>
#define size 30
void main()
{
    char a[size];
    int i,count=0;
    scanf("%s",&a);
    printf("the entered char is:%s",a);
    for(i=0;a[size]=="\0";i++)
    {
        count=count+1;
    }
    printf("the length of string %s is: %d",a,count);
}
