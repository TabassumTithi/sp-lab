#include <stdio.h>

int main() {
  double principalamount, rate, years, simpleinterest;

  printf("Enter the principal amount: ");
  scanf("%lf", &principalamount);

  printf("Enter the annual interest rate: ");
  scanf("%lf", &rate);

  printf("Enter the time period in years: ");
  scanf("%lf", &years);

  simpleinterest = (principalamount * rate * years) / 100.0;
  printf("The simple interest is: %.2lf\n", simpleinterest);

  return 0;
}
