//find the distance between two points in 2d plane
#include<stdio.h>
#include<math.h>
int main()
{
  double x1,x2,y1,y2,distance;
  printf("Enter the co-ordinate of x1:\n");
  scanf("%lf", &x1);
  printf("Enter the co-ordinate of x2\n");
  scanf("%lf", &x2);
  printf("Enter the co-ordinate of y1\n");
  scanf("%lf", &y1);
  printf("Enter the co-ordinate of y2\n");
  scanf("%lf", &y2);
  b=((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)); 
  double distance=sqrt(b);
  printf("the entered co-ordinate of x1 is %f\n",x1);
  printf("the entered co-ordinate of x2 is %f\n",x2);
  printf("the entered co-ordinate of y1 is %lf\n",y1);
  printf("the entered co-ordinate of y2 is %lf\n",y2);
  printf("the distance between two points is: %lf\n", distance); 
  return 0;
}
