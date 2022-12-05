//write a program to find the volume of the powder tin
#include <stdio.h>
int main()
{
  float radius, volume,height;
  printf("Enter the radius of a powder tin\n");
  scanf("%f", &radius);
   printf("Enter the height of a powder tin\n");
  scanf("%f", &height);
  volume = 3.14159*radius*radius*height;
  printf("volume of the powder tin = %f\n", volume); 
  return 0;
}