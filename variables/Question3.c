#include<stdio.h>

int main() {
  int integer;
  float decimal;
  double doub;
  char character;

  printf("The size of int is %lu bytes\n" , sizeof(integer));
  printf("The size of float is %lu bytes\n" , sizeof(decimal));
  printf("The size of double is %lu bytes\n" , sizeof(doub));
  printf("The size of char is %lu bytes\n" , sizeof(character));

  return 0;

}