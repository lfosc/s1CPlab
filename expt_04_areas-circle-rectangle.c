/* Expt 04: Areas of a rectangle and circle
 * ver: 202511201941
 */
 
#include <stdio.h>
#define PI 3.14159265359

int
main(){
    double radius;
    double length, breadth;
    
    printf("Circle: Input radius: ");
    scanf("%lf", &radius);
    
    printf("\nRectangle: Input length:  ");
    scanf("%lf", &length);
    printf("Rectangle: Input breadth: ");
    scanf("%lf", &breadth);
    
    printf("\nArea of the circle = %lf sq. units\n", (PI*radius*radius));
    printf("Area of the rectangle = %lf sq. units\n", (length*breadth));
    
    return 0;
}