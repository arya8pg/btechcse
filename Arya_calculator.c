/*write a program to input 2 integer datatypes and display the result of adding,multiplying,subtracting and dividing the two numbers.
Also display the two numbers entered*/
#include<stdio.h>
int main()
{
    int x,y,rem;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);
    float sum,sub,mult,div;
    sum=x+y;
    sub=x-y;
    mult=x*y;
    div=x/(float)y;
    rem=x%y;
    printf("the result of addition is=%f\nthe result of subtraction is=%f\nthe result of multiplication is=%f\nthe result of division is=%f\n the result of remainder is=%d\n",sum,sub,mult,div,rem);
  printf("the value of x is %d\n",x);
  printf("the value of y is %d\n",y);
    return 0;
}