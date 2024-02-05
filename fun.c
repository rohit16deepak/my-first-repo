#include<stdio.h>
int sum(int a,int b);

int main()
{
    int s;
    sum(4,5);
    s=sum(4,5);
    printf("sum=%d",s);


}

int sum(int a, int b)
{
    int sum=0;
    sum=a+b;
    return sum;
} 