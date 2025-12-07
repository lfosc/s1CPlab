/* Expt 05: Check whether a number is even or odd
 * ver: 202511201952
 */
 
#include <stdio.h>

int
main(){
    int num = 0;
    
    printf("Input a number: ");
    scanf("%d", &num);
    
    if(num == 0){
        printf("Number is neither even nor odd.\n");
    }
    else if(num%2 == 0){
        printf("Number is even.\n");
    }
    else{
        printf("Number is odd.\n");
    }
    
    return 0;
}