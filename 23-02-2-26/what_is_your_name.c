#include <stdio.h>

int main() {
  int age;
  char name[50];

  printf("Enter your name: ");
  fgets(name, 50, stdin);
  printf("hello %s", name);
}
