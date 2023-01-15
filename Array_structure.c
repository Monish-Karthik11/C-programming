#include<stdio.h>
struct student{
    char n[20];
    int r;
};
void main(){
    struct student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%s",s[i].n);
        scanf("%d",&s[i].r);
    }
    for(i=0;i<3;i++)
    {
        printf("Student details are\n");
        printf("%s is the name\n",s[i].n);
        printf("%d is the roll number\n",s[i].r);
    }
}
