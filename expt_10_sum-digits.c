/* Expt 10: Sum of digits of a number
 * ver: 202512071117
 */

#include <stdio.h>

int
main(){
    unsigned int num = 0;
    unsigned int sum = 0;
    
    printf("Input a positive number: ");
    scanf("%u", &num);
    
    for(; num > 0; num /= 10){
        sum += num % 10;
    }
    
    printf("The sum of digits = %u\n", sum);
    
    return 0;
}