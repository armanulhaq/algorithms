#include <stdio.h>

int main() {
  int count_of_input;
  printf("Enter the number of numbers you want to sort: \n");
  scanf("%i", &count_of_input);

  int input[count_of_input];
  printf("Enter the numbers: \n");
  for (int i = 0; i < count_of_input; i++) {
    scanf("%i",&input[i]);
  }

  for (int i = 0; i < count_of_input; i++) {  
    int smallest_index = i;
    for (int j = i + 1; j < count_of_input - 1; j++){
      if (input[smallest_index] > input[j]) {
        smallest_index = j;
      }
    }
    int temp = input[i];
    input[i] = input[smallest_index];
    input[smallest_index] = temp;
  }

  for (int i = 0; i < count_of_input; i++) {
    printf("%i ", input[i]);
  }
  printf("\n");
}
