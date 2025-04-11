#include<stdio.h>

int main() {
  char name[30];
  printf("Enter your name: ");
  scanf("%19s" , &name);

  printf("Welcome %s to KG coding" , name);
  return 0;
}