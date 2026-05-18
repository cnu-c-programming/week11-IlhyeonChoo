#include <stdio.h>
#include <stdlib.h>

int cmp_asc() {}

int cmp_desc() {}

void print_arr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {5, 2, 8, 1, 9, 3};
  int size = 6;

  print_arr(arr, size);

  print_arr(arr, size);

  return 0;
}
