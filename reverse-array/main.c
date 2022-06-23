#include <stdio.h>

void reverse_array(int *arr, int num) {
  for (int i = 0; i < num / 2; i++) {
    int tmp = arr[i];
    arr[i] = arr[num - i - 1];
    arr[num - i - 1] = tmp;
  }
}

int main() {
  int arr[] = { 1, 2, 3, 10, -1 };

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  reverse_array(arr, sizeof(arr) / sizeof(int));

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
