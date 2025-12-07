/* Expt 24: Recursive Factorial Computation 
 * ver: 2025120713027
 */

#include <stdio.h>

unsigned int fact(unsigned int);

int
main(){
    unsigned int num = 0;
    
    printf("Input number: ");
    scanf("%u", &num);
    
    printf("Factorial of %u = %u\n", num, fact(num));
    
    return 0;
}

unsigned int fact(unsigned int n){
    if(n == 0){
        return 1;
    }
    
    return(n * fact(n-1));
}