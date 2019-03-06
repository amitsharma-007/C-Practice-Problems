
/****************************************************************************/
/*                                                                          */
/*
    => Swap the numbers
    => Binary to decimal Conversion
*/
/*                                                                          */
/****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int b2d(int binary);
void swap(int* ptr1, int* ptr2);

int main(){
int num1, num2;
int binary, decimal;
printf("Enter the Numbers : \n");
scanf("%d\n%d", &num1, &num2);
printf("Values of num1 and num2 before swapping are: %d and %d\n", num1, num2);
swap(&num1, &num2);
printf("Values of num1 and num2 after swapping are: %d and %d\n", num1, num2);
printf("Enter the binary number for conversion to decimal number: ");
scanf("%d", &binary);
decimal = b2d(binary);
printf("Decimal equivalent to binary number entered is : %d\n", decimal);

return 0;

}

void swap(int* ptr1, int* ptr2){
int temp;
temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
}


int b2d(int binary){
    int num,remainder, base=1, decimal = 0;
    num = binary;
    while(num>0){
        remainder = num%10;
        decimal = decimal + remainder*base;
        num = num/10;
        base = base*2;
    }
    return decimal;
}
