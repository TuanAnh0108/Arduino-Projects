#include <stdio.h>

int main(void) {
  int x,y; /*Declare the tye of variable*/
  /*Enter the coordination of point*/
  printf("Enter the x here: "); 
  scanf("%d", &x); /*input the x coordination*/
  printf("Enter the y here: ");
  scanf("%d", &y); /*input the y coordination*/

/*Check the x and y coordination of the point*/
  if(x > 0 && y > 0){ 
    printf("The coordinate point (%d,%d) lies in the First quadrant", x,y);
  } else if(x > 0 && y < 0){
      printf("The coordinate point (%d,%d) lies in the Fourth quadrant", x,y);
  } else if(x < 0 && y > 0){
      printf("The coordinate point (%d,%d) lies in the Second quadrant", x,y);
} else {
    printf("The coordinate point (%d,%d) lies in the Third quadrant", x,y);
}

}
