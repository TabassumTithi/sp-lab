#include <stdio.h>
#include <string.h>

int main() {
  char str[100], palindrome = -1;

  printf("Enter a string: ");
  scanf("%s", str);

  int left = 0;
  int right = strlen(str) - 1;

  while (right > left) {
    if (str[left++] != str[right--]) {
      palindrome = -1;
    } else {
      palindrome = 1;
    }
  }

  if (palindrome == -1) {
    printf("%s is not a palindrome.\n", str);
  } else {
    printf("%s is a palindrome.\n", str);
  }

  return 0;
}
