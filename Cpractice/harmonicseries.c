#include <stdio.h>
/*This program will display the n terms of harmonic series and their sum*/
int main(void) {
  /*Define the variable*/
  float num, sum=0;
  /*Ask for the input*/
  scanf("%f",&num);
  for(int i = 1; i <= num; i++){
    /*Display the harmonic series*/
    printf("1/%d + ",i);
    /*Calculate the sum of the series*/
    sum+=1/(float)i;
  }
  /*Display the result*/
  printf("Sum of Series upto %0.0f terms: %0.6f",num,sum);
  return 0;
}
