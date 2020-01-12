#include <stdio.h>
/*This program will calculate the sum of the series 1 +11 + 111 + 1111 + .. n terms*/
int main(void) {
  /*Define the variables*/
  long num, sum=0,j=1;
  /*Ask for input*/
  scanf("%ld",&num);
  for(int i=1; i <= num; i++){
    /*Calculate the sum of the series*/
    sum+=j;
    /*Display the series*/
    printf("%ld + ",j);
    if(i==num){
      printf("%ld\n",j);
    }

  /*Increase the length of number*/
    j=(j*10)+1; 
  }
  /*Display the resutl*/
  printf("The sum is: %ld",sum);
  return 0;
}
