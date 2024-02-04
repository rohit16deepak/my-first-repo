#include<stdio.h>
void sum(int a,int b);


void sum(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void main()
{
    int a,b;
    sum(a,b);
}