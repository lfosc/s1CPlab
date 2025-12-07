/* Expt 16: Sum and Average of an Array
 * ver: 202512071216
 */

#include <stdio.h>
#define MAXSIZE 100

int
main(){
    int arr[MAXSIZE];
    unsigned int size = 0, i = 0;
    double sum = 0, avg = 0;
    
    printf("Input array size (1 to %u): ", MAXSIZE);
    scanf("%u", &size);
    
    for(i = 0; i < size; i ++){
        printf("Input element: ");
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < size; i++){
        sum += arr[i];
    }
    
    avg = sum/size;
    
    printf("\nSum = %lf\n", sum);
    printf("Average = %lf\n", avg);
    
    return 0;
}