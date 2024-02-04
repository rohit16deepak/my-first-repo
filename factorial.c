#include<stdio.h>
void main()
{
    int a,fact=1;
    printf("enter number to get factorial\n");
    scanf("%d",&a);
    for (int i=a;i>0;i--)
    {
        fact*=i;
        
    }
    printf("fact= %d",fact);
}