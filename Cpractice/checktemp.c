#include <stdio.h>

int main(void) {
  int temp; /*Declare the type of variable*/
  /*Input the temperature*/
  printf("Enter the temperature here:");
  scanf("%d", &temp);

/*Check the condition*/
  if(temp < 0){
    printf("It's Freezing");
  } else if(temp > 0 && temp < 10){
    printf("It's Very Cold");
  } else if(temp > 10 && temp < 20){
    printf("It's Cold weather");
   } else if(temp > 20 && temp < 30){
    printf("It's Normal");
   } else if(temp > 30 && temp < 40){
    printf("It's hot");
   } else {
     printf("It's very hot");
   }
} 
