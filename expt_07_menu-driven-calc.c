/* Expt 07: Menu Driven Calculator
 * ver: 202512071050
 */

#include <stdio.h>

int
main(){
    double a = 0.0, b = 0.0;
    char opr = 0;
    
    printf("Input operands:\n");
    printf("Input a: ");
    scanf("%lf", &a);
    printf("Input b: ");
    scanf("%lf", &b);
    printf("Input operator (+-*/): ");
    scanf(" %c", &opr); //space before format specifier consumes preceeding whitespaces
    
    printf("\n"); //newline for formatting

    switch(opr){
        case '+':
            printf("%lf + %lf = %lf", a, b, (a+b));
            break;
            
        case '-':
            printf("%lf - %lf = %lf", a, b, (a-b));
            break;
            
        case '*':
            printf("%lf * %lf = %lf", a, b, (a*b));
            break;
            
        case '/':
            printf("%lf / %lf = %lf", a, b, (a/b));
            break;
            
        default:
            printf("Invalid operator!\n");
            return -1;
    }
    
    return 0;
}