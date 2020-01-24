#include <stdio.h>

int main(void) {
  int Maths, Phy, Chem,total, totalMP; /*Declare the type of variables*/
  /*Input the data*/
  printf("Enter the Maths mark here: ");
  scanf("%d", &Maths);
  printf("Enter the Physics mark here: ");
  scanf("%d", &Phy);
  printf("Enter the Chemistry mark here: ");
  scanf("%d", &Chem);

  total = Maths + Phy + Chem; /*total mark of 3 subjects*/
  totalMP = Maths + Phy; /*total mark of math and Physics*/
  /*Check the candidate's mark with the given condition*/
  if((Maths >= 65 && Phy >= 55 && Chem >= 50 && total >= 180) || totalMP >= 140){
    printf("The candidate is eligible for admission");
  } else {
    printf("The candidate is not eligible for admission");
  }

}
