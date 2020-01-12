#include <stdio.h>

int main(void) {
/*Define the variables*/
int i,sum,min,max;
/*Ask the user for Input*/
  printf("Input the starting range or number : ");
  scanf("%d",&min);
  printf("Input the ending range of number : ");
  scanf("%d",&max);
  /*Print out the result*/
  printf("The Perfect numbers within the given range : ");

  for(int n = min;n <= max; n++){ /*checking every number in the range*/
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)     /*If the number is divided by number that is smaller than it, add it to the sum*/
          sum=sum+i;
          i++;
    }
    if(sum==n) /*check if the number is equal to the sum*/
    printf("% d ",n);
  }

}
