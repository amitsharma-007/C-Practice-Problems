
/****************************************************************************/
/*                                                                          */
/*      =>  This program takes an integer, N, and find the sum of
            odd or even number from 0-N. <=      */
/*                                                                          */
/****************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(){
int num, SumOdd = 0, SumEven = 0;
printf("Enter the Integer : \n");
scanf("%d", &num);
for(int i = 0; i<=num; i++){
    if(i%2 == 0 ){
        SumEven = SumEven + i;
    }
    else if(i%2 == 1){
        SumOdd = SumOdd + i;
    }
    else{
        printf("Error!!!");
    }
}
printf("Sum of Even number : %d \n", SumEven);
printf("Sum of Odd number : %d \n ", SumOdd);

return 0;

}


