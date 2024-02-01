#include<stdio.h>
void main()
{// program to check positive negative zero case of number
    int a;
    printf("enter any number\n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is positive number",a);
    }
    else if (a<0)
    {
        printf("%d is negative number",a);
    }
    else if (a==0)
    {
        printf("%d is a zero",a);
    }
}