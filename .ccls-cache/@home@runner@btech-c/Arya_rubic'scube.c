//write a program to find the volume of a Rubix cube
#include <stdio.h>
int main()
{
  float a,volume;
  printf("Enter the length of one side in the rubic's cube\n");
  scanf("%f", &a);
  volume = a*a*a;
  printf("volume of a Rubic's cube is: %f\n", volume); 
  return 0;
}