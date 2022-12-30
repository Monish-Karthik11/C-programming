#include<stdio.h>
void main()
{
    char a[10];
    int i,n,count=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<n/2;i++)
    {
        if(a[i]==a[n-i-1])
        {
           count++;  
        }
       
    }
    if(count==i)
    {
        puts("string is palindrome");
        
    }
    else
    {
        puts("string is not palindrome");
    }
    
}
