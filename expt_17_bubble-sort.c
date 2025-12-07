/* Expt 17: Bubble Sort
 * ver: 202512071222
 */

#include <stdio.h>
#define MAXSIZE 100

int
main(){
    int arr[MAXSIZE];
    unsigned int size = 0, i = 0;
    
    printf("Input array size (1 to %u): ", MAXSIZE);
    scanf("%u", &size);
    
    for(i = 0; i < size; i ++){
        printf("Input arr[%u]: ", i);
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < (size - 1); i++){
        unsigned int j = 0;
        for(; j < (size - i - 1); j++){
            if(arr[j] > arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nSORTED ARRAY:\n");
    for(i = 0; i < size; i++){
        printf("arr[%u] = %d\n", i, arr[i]);
    }
    
    return 0;
}