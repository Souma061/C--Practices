#include<stdio.h>

int main() {

char first_name[20];
char last_name[20];
int age;

printf("Enter your first name: ");
scanf("%s" , &first_name);
printf("Enter your last name: ");
scanf("%s" , &last_name);
printf("Enter your age: ");
scanf("%d" , &age);

printf("My name is %s %s and I am %d years old.\n" , first_name, last_name , age);
return 0;
}