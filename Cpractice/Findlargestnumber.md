#include <stdio.h>

int main(void) {
  int a,b,c,max; /*Declare the type of variables*/
  printf("Enter the first num here: ");
  scanf("%d", &a);
  printf("Enter the second num here: ");
  scanf("%d", &b);
  printf("Enter the third num here: ");
  scanf("%d", &c);

  printf("1st number = %d, 2nd number = %d, 3rd number = %d\n", a,b,c);
  
  max=a;
  if(b > a){
    max = b;
  } if (c > b){
    max = c;
  } 
  printf("%d is the maximum value",max);
}
