/* Expt 12: Check if a number is an Armstrong number
 * ver: 202512071124
 */

#include <stdio.h>
#include <math.h>

int
main(){
    unsigned int num = 0, cpy = 0;
    unsigned int pwr = 0;
    unsigned int sum = 0;
    
    printf("Input a positive number: ");
    scanf("%u", &num);
    
    for(cpy = num; cpy > 0; cpy /= 10){
        pwr++;
    }
    
    for(cpy = num; cpy > 0; cpy /= 10){
        sum += (int)(pow((cpy%10), pwr));
    }
    
    if(sum == num){
        printf("Number is Armstrong.\n");
    } else {
        printf("Number is NOT Armstrong.\n");
    }
    
    return 0;
}