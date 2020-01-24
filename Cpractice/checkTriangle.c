#include <stdio.h>

int main(void) {
  
 int a,b,c; /*Decalre the type of variable*/
 /*Input the length of each side of the triangle*/
 printf("Enter the length of first side of triangle: ");
 scanf("%d", &a);
 printf("Enter the length of second side of triangle: ");
 scanf("%d", &b);
 printf("Enter the length of third side of triangle: ");
 scanf("%d", &c);

 if(a==b && b==c){ /*if 3 sides'length are equal => Equilateral triangle*/
   printf("This is Equilateral triangle");
 } else if((a==b && b != c) || (a==c && b != c) ){ /*If 2 of 3 sides' length are equal => Isosceles triangle*/
   printf("This is Isosceles triangle");
 } else { /*The other if Scalene triangle*/
   printf("This is Scalene triangle");
 }

}
