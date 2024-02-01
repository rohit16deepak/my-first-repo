#include<stdio.h>
void main()
{// program to get table of any natural number
    int i,a,tab;
    printf("enter number to print table : ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        tab=i*a;
        printf("%d \n",tab);

    }
    
}