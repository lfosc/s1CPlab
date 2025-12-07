/* Expt 06: Quadratic Equation Solver
 * ver: 202511201956
 */
 
#include <stdio.h>
#include <math.h>

int
main(){
    double a, b, c;
    double discr;
    
    printf("Quadratic Equation Solver\n");
    printf("\nInput the coefficient of (x^2): ");
    scanf("%lf", &a);
    printf("Input the coefficient of (x): ");
    scanf("%lf", &b);
    printf("Input the constant term: ");
    scanf("%lf", &c);
    
    discr = (b*b)-(4*a*c);
    
    //edge case - coefficient of (x^2) cannot be zero
    if(a == 0){
        printf("\nERROR: Coefficient of (x^2) cannot be zero.\n");
        return -1;
    }
    
    if(discr == 0){
        double x;
        
        printf("\nRoots are real and equal.\n");
        x = (-b)/(2*a);
        
        printf("x = %lf\n", x);
        return 0;
    }
    
    if(discr > 0){
        double x1, x2;
        
        printf("\nRoots are real and distinct.\n");
        x1 = ((-b)+sqrt(discr))/(2*a);
        x2 = ((-b)-sqrt(discr))/(2*a);
        
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
        return 0;
    }
    
    if(discr < 0){
        double re_x, im_x;
        
        printf("\nRoots are a complex conjugate pair.\n");
        re_x = (-b)/(2*a);
        im_x = sqrt(-discr)/(2*a);
        
        printf("x1 = (%lf) + i(%lf)\n", re_x, im_x);
        printf("x2 = (%lf) - i(%lf)\n", re_x, im_x);
        return 0;
    }
    
    return -1; //unexpected exception
}