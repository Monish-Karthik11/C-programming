#include<stdio.h>
void main()
{
    int i,j,a[100][100],b[100][100],c[50][50],row,col,row1,col1;
    printf("enter 1st array\n");
    scanf("%d",&row);
    scanf("%d",&col);
    printf("enter 1st array elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d ",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("enter 2nd array\n");
    scanf("%d",&row1);
    scanf("%d",&col1);
    printf("enter 2nd array elements\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("after addition eleements are\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    
}
