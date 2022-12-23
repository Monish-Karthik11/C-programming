#include<stdio.h>
void main()
{
    int a[10],ele,high,low,mid,n,i;
    printf("enter no of ele\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         printf("%d",a[i]);
    }
    printf("\nenter element to be searched\n");
    scanf("%d",&ele);
    low=0,high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]==ele)
        {
            printf("element fount at pos:%d",mid+1);
            break;
            
        }
        if(a[mid]<ele)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
