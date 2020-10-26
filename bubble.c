#include <stdio.h>
#include <string.h>

int main() {
  int sort_numbers;
  printf("Enter the number of inputs: \n");
  scanf("%i", &sort_numbers);

  int input[sort_numbers];
  printf("Enter the numbers: \n");
  for (int i = 0; i < sort_numbers; i++){
    scanf("%i", &input[i]);
  }

  for (int i = 0; i < sort_numbers; i++) {
    int swap_counter = 0;
    printf("hello");
    for (int j = 0; j < sort_numbers - 1; j++) {
      if (input[j] > input[j+1]) {
        int temp = input[j+1];
        input[j+1] = input[j];
        input[j] = temp;
        swap_counter = swap_counter + 1;
      }
    }
    if (swap_counter == 0) {
      break;
    }
  }

  printf("Sorted numbers: \n");

  for(int i = 0; i < sort_numbers; i++) {
    printf("%i ", input[i]);
  }

  printf("\n");
}
