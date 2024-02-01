#include<stdio.h>
void main()
{// substraction without using - operator
    int a,b,rem;
    printf("enter the value of a and b \n");
    scanf("%d %d",&a,&b);
    rem = a%b;
    printf("%d",rem+b);

}