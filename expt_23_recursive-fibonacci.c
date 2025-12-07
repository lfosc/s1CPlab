/* Expt 23: Recursive Fibonacci Series 
 * ver: 2025120713022
 */

#include <stdio.h>

unsigned int fib(unsigned int);

int
main(){
    unsigned int terms = 0;
    
    printf("Input number of terms: ");
    scanf("%u", &terms);
    
    printf("\nSTART, ");
    for(unsigned int i = 0; i < terms; i++){
        printf("%u, ", fib(i));
    }
    
    printf(" END\n");
    
    return 0;
}

unsigned int fib(unsigned int n){
    //returns the nth term of the fibonacci sequence; numbering starts at 0
    
    if(n <= 1){
        return n;
    }
    
    return(fib(n-1) + fib(n-2));
}