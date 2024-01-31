#include<stdio.h>
void main()
{
    int i,a;
    printf("enter the range i and a\n");
    scanf("%d %d",&i,&a);

    for(i;i<=a;i++)
    {
        if (i%2==0)
        {
            printf("%d is a even number\n",i);

        }
        else if (i%2==1)
        {
            printf("%d is a odd number\n",i);
        }
    }
    
}