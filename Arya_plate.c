////write a program to take the radius and print the area of the plate or a coffee coaster
#include<stdio.h>
int main()
{
  float radius, area;
  printf("Enter the radius of the plate\n");
  scanf("%f", &radius);
  area = 3.14159*radius*radius;
  printf("Area of the plate = %f\n", area); 
  return 0;
}

