#include<stdio.h>
void main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);

     if (a%2==0 && a>0)
   {
      printf("%d is a even number",a);
   }
     else if (a%2==1)
    {
      printf("%d is odd number",a);
    }
    else if (a<0);
    {
        printf("%d enter number greater than zero",a);

    }

   


}
