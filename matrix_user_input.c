#include<stdio.h>
void main()
{
    int i,j,a[50][50],row,col;
    printf("enter 2d array size:\n");
    scanf("%d",&row);
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}
