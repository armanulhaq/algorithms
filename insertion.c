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
    int temp = input[i];
    int swap_counter = 0;
    for (int j = i-1; j >= 0; j--) {
      if (temp < input[j]) {
        swap_counter = swap_counter + 1;
      }
    }
    if (swap_counter > 0) {
      for (int k = i; k >= 1; k--){
        input[k] = input[k-1];
      }
      input[i-swap_counter] = temp;
    }
  }  

  for (int i = 0; i < count_of_input; i++) {
    printf("%i ",input[i]);
  }
  printf("\n");
}

