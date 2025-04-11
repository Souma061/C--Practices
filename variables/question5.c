// circumference of circle
#include<stdio.h>
#define pi 3.14159
int main() {
  float radius , circumference;
  printf("Enter the radius: ");
  scanf("%f" , &radius);

  circumference = 2 * pi * radius;
  printf("The circumference is %.2f\n" , circumference);
  return 0;
}