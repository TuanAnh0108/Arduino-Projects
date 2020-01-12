#include <stdio.h>
/*This program calculate the sum of 10 given numbers and the average of them*/
int main(void) {
  /*Define variables*/
  float average, num, sum=0;
  /*Ask the user input*/
  for(int i =1; i<11;i++){
      scanf("%f",&num);
      /*Calculate the sum of 10 numbers*/
      sum+=num;
  }
  /*Calculate the average sum of 10 numbers*/
  average=sum/10;
  /*Print the result*/
  printf("The sum of 10 numbers is: %f\n",sum);
  printf("The average is: %0.5f", average);
  return 0;

}
