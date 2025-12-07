/* Expt 13a: Print Primes to n (Less Efficient)
 * ver: 202512071130
 */

#include <stdio.h>

int
main(){
    unsigned int n = 0;
    unsigned int i = 1;
    
    printf("Input upper limit: ");
    scanf("%u", &n);
    
    printf("\nSTART, ");
    
    if(n >= 2){
        printf("2, ");
    }
    
    for(i = 3; i <= n; i += 2){
        unsigned int j = 0;
        char isPrime  = 1;
        
        for(j = 3; j < i; j += 2){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime == 1){
            printf("%d, ", i);
        }
    }
    
    printf("END\n");
    return 0;
}