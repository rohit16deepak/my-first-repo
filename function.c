#include<stdio.h>
void sum();
void sun();
void div();
void multi();

void sum()
{
    int a,b,sum=0;
    printf("enter two numbers add\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum= %d\n",sum);

}
void sub()
{
    int a,b,sub=0;
    printf("enter two numbers to substract\n");
    scanf("%d %d",&a,&b);
    sub=a-b;
    printf("sub= %d\n",sub);

}
void div()
{
     float a,b,div;
    printf("enter two numbers to divide\n");
    scanf("%d %d",&a,&b);
    div=a/b;
    printf("div= %f\n",div);
}
void multi()
{
     int a,b,multi;
    printf("enter two numbers multiply\n");
    scanf("%d %d",&a,&b);
    multi=a*b;
    printf("multi= %d\n",multi);
}
void main()

{
    sum();
    sub();
    div();
    multi();

}