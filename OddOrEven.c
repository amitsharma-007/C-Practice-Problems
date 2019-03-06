
/****************************************************************************/
/*                                                                          */
/*     => Program to checks whether a given integer is even or odd. <=      */
/*                                                                          */
/****************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(){
int num, remainder;
printf("Enter the Integer : \n");
scanf("%d", &num);
remainder = num % 2;
if(remainder == 0){
    printf("Enter number, %d, is an Even number.\n", num);
}
else if(remainder==1){
    printf("Entered number, %d, is an Odd number.\n", num);
}
else{
    printf("Invalid number to check.");
}
}

