#include <stdio.h>

void modify_and_print(int arr[], int size) {
  int secondSmallest = arr[1];
  int secondLargest = arr[size - 2];

  if (secondSmallest % 2 == 0) {
    secondSmallest = secondSmallest+ 2;
  } else {
    secondSmallest =secondSmallest- 2;
  }

  if (secondLargest % 2 == 0) {
    secondLargest = secondLargest * 2;
  } else {
    secondLargest =secondLargest / 2;
  }

  arr[1] = secondSmallest;
  arr[size - 2] = secondLargest;

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int size, temp, i;

  printf("Enter the size in the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  modify_and_print(arr, size);

  return 0;
}
