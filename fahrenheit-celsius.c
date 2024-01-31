#include<stdio.h>
void main()
{
    int n;
    
    printf("choose the following \n 1. c to f\n 2.f to c\n");
    scanf("%d",&n);

    if (n==1)
    {
        float c,f;
        printf("enter temperature in celsius ");
        scanf("%f",&c);
        f=((1.8)*c+32);
        printf("%f fahrenheit",f);
    }
    else if (n==2)
    {
        float c,f;
        printf("enter temperature in fahrenheit ");
        scanf("%f",&f);
        c=((f-32)*5/9);
        printf("%f celsius",c);
    }
}