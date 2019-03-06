
/****************************************************************************/
/*                                                                          */
/*      =>  This program swap the contents of the two variables.    <=      */
/*                                                                          */
/****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void swap(int* ptr1, int* ptr2);

int main(){
int num1, num2;
printf("Enter the Numbers : \n");
scanf("%d\n%d", &num1, &num2);
printf("Values of num1 and num2 before swapping are: %d and %d\n", num1, num2);
swap(&num1, &num2);
printf("Values of num1 and num2 after swapping are: %d and %d", num1, num2);

return 0;

}

void swap(int* ptr1, int* ptr2){
int temp;
temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
}


