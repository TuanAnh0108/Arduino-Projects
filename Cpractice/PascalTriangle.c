 #include <stdio.h>
/*This program will print out the pascal triangle with the given rows*/
int main(void) {
  /*Define the variables*/
  int rows, coef=1, space, i, j;
  /*Ask the user for input*/  
  scanf("%d", &rows);

    for (i=0; i<rows; i++) {  
        for (space=1; space <= rows-i; space++) /*Print space between 2 coefs*/
            printf("  ");
        for (j=0; j<=i; j++) {  
            if (j==0 || i==j)
                coef = 1;   /*The first and the last coef of each row are 1*/
            else
                coef=coef*(i-j+1)/j;   /*Calculate the coefficient*/
            printf("%4d", coef);   /*print out the coefficient*/
        }
        printf("\n");   /*Enter a new line*/
    }
         
    return 0;
}
