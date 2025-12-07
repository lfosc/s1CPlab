/* Expt 11: Check if a number is palindrome
 * ver: 202512071120
 */

#include <stdio.h>

int
main(){
    int num = 0, cpy = 0, rev = 0;
    
    printf("Input an integer: ");
    scanf("%d", &num);
    
    for(cpy = num; cpy != 0; cpy /= 10){
        rev = (rev*10) + (cpy%10);
    }
    
    if(num == rev){
        printf("%d is a palindrome number.\n", num);
    } else{
        printf("%d is NOT a palindrome number.\n", num);
    }
    
    return 0;
}