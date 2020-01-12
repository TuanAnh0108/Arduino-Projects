#include <stdio.h>
/*This program will display the cube of the number upto given an integer*/
int main(void) {
  /*Define the variables*/
  long num, cube;
  printf("Input number of terms: ");
  scanf("%ld", &num);
  /*Print out the result*/
  for(int i = 1; i <= num;i++){
    /*Calculate the cube of a number*/
    cube=i*i*i;
    printf("Number is: %d and cube of the %d is: %ld\n",i,i,cube);
  }
  return 0;
}
