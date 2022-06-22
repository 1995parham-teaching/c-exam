#include <stdio.h>

void mini_max_sum(int arr[]) {
  int min = arr[0];
  for (int i = 0; i < 5; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  int max = arr[0];
  for (int i = 0; i < 5; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += arr[i];
  }

  printf("maximum sum: %d\n", sum - min);
  printf("minimum sum: %d\n", sum - max);
}

int main() {
  int arr[] = {1, 3, 5, 7, 9};

  mini_max_sum(arr);
}
