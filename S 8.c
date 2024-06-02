#include <stdio.h>

int main() {
  int size, value;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the values of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the value for search: ");
  scanf("%d", &value);

  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      printf("Element %d found at position %d.", value, i);
      return 0;
    }
  }

  printf("%d is not found", value);

  return 0;
}
