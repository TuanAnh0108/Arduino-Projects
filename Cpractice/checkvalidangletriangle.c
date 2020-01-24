#include <stdio.h>

int main(void) {
  int a,b,c, total; /*Declare the type of variable*/
  /*Input the value of each angle*/
  printf("Enter the first angle: ");
  scanf("%d", &a);
  printf("Enter the second angle: ");
  scanf("%d", &b);
  printf("Enter the third angle: ");
  scanf("%d", &c);

  total = a+b+c; /*calculate the sum of three angle*/

  if(total == 180){ /*if the sum of 3 angles are 180 => valid triangle*/
    printf("This is a valid triangle");
  } else { /*if not => valid triangle*/
    printf("This is not a valid triangle");
  }
}
