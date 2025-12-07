/* Expt 21: Swap using call by reference function
 * ver: 202512071302
 */

#include <stdio.h>

void swap(int *, int *);

int
main(){
    int x, y;
    
    printf("Input x: ");
    scanf("%d", &x);
    printf("Input y: ");
    scanf("%d", &y);
    
    swap(&x, &y);
    
    printf("\nSwapped Values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}