#include <stdio.h>

int main(void) {
  int age;  /*Declare the type of variable*/
  printf("Enter the age of candidate here: ");
  scanf("%d",&age);

/*Checking the age of the candidate*/
  if(age >= 18){  /*If age >= 18 then it is eligible*/
    printf("Congratulations! You are eligible for casting your vote");
  } else { . /*If age < 18 then it is not eligible*/
    printf("Sorry. You are not eligible for casting your vote");
  }
}
