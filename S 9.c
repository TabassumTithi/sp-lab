#include <stdio.h>

int bubble_sort(int arr[], int size) {
  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return 0;
}

int main() {
  int size, temp, i;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  bubble_sort(arr, size);

  printf("Sorted array:\n");
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
