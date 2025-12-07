/* Expt 09: Sum of n numbers
 * ver: 202512071113
 */

#include <stdio.h>

int
main(){
    unsigned int n = 0;
    long sum = 0;
    int num = 0;
    
    printf("Input n: ");
    scanf("%u", &n);
    
    for(; n > 0; n--){
        printf("Input a number: ");
        scanf("%d", &num);
        sum += num;
    }
    
    printf("\nSum of 'n' numbers = %ld\n", sum);
}