#include <stdio.h>
/*This program will display the given number in the reverse order*/
int main(void) {
  /*Define the variables*/
  int num, r=0;
  /*Ask the user for the input*/
  scanf("%d",&num);

  /*Reverse the number*/
  while(num!=0){
    r=r*10;
    r=r+num%10;
    num=num/10;
  }
  /*Print the result*/
  printf("%d",r);
  return 0;
}
