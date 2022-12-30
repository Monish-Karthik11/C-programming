#include<stdio.h>
void main()
{
    char a[10],search;
    int i,count=0;
    puts("enter a string:\n");
    gets(a);
    puts("enter a search char\n");
    search=getchar();
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==search)
        {
            count=count+1;
        }
    }
    printf("ele occured%d times",count);
    
    
}

