#include<stdio.h>
void main()
{
    int a,b,swap;
    printf("enter the value of a & b to swap\n");
    scanf("%d %d",&a,&b);

    swap= a;
    a = b;
    b= swap;
    printf("a= %d & b= %d",a,b);

}