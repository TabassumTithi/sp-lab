#include <stdbool.h>
#include <stdio.h>

bool isPrime(int num) {
  if (num <= 1)
    return false;
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main() {
  int lower, upper;
  printf("Enter the start number: ");
  scanf("%d", &lower);
  printf("Enter the end number: ");
  scanf("%d", &upper);

  printf("Prime numbers between %d and %d:\n", lower, upper);
  for (int i = lower; i <= upper; ++i) {
    if (isPrime(i))
      printf("%d ", i);
  }

  return 0;
}
