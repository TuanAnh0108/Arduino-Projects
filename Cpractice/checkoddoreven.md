#include <stdio.h>

int main(void) {
  int nums;    /*Declare the type of variable*/
  printf("Enter the number here: "); 
  scanf("%d", &nums);  /*The user input the number*/

  if(nums % 2 ==0){  /*If the number is divided by 2 => even interger*/
    printf("%d is a even integer",nums);
  } else { .   /*else the number is odd*/
    printf("%d is a odd integer",nums);
  }
}
