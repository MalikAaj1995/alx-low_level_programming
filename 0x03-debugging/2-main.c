#include <stdio.h>

int largest_number(int a, int b, int c);

int main() {
  int largest;
  largest = largest_number(972, -98, 0);
  printf("The largest number is %d\n", largest);
  return 0;
}

int largest_number(int a, int b, int c) {
  int largest = a;
  if (b > largest) {
    largest = b;
  }
  if (c > largest) {
    largest = c;
  }
  return largest;
}
