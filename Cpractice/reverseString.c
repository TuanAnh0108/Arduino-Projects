#include <stdio.h>
/*This program will reverse the given string*/
int main(void) {
  /*Define the variables*/
  char String[10000]="", ReverseString[10000]="";
  int begin, end, count=0;
  /*Ask user for input*/
  scanf("%s",&String);

  /*Calculate the length of String*/
  while(String[count] != '\0'){
    count++;
  }
  end = count - 1; /*Calculate the number of position of the last character of the given String*/

  /*Revrse String by assign the last character of the String to the first character of reverseString and so on*/
  for(begin = 0; begin < count; begin++){
    ReverseString[begin] = String[end];
    end--;
  }

  /*Print the result*/
  printf("%s\n",ReverseString);
  return 0;
}
