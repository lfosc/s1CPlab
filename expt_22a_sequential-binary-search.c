/* Expt 22a: Sequential and Binary Search (Sorted Input)
 * Note: This program uses global variables to avoid pointers as per Instructor's guidelines
 * ver: 2025120713017
 */

#include <stdio.h>
#define ARR_MAX 100
#define NOT_FOUND -1 //use symbolic constants to avoid magic numbers

int arr[ARR_MAX];
unsigned int length = 0;

int seq_search(int);
int bin_search(int);

int
main(){
    int query = 0;
    char algo = 0;
    int result = -2; //-2 chosen to avoid conflict with NOT_FOUND
    
    printf("Input number of elements: ");
    scanf("%u", &length);
    
    printf("\nInput SORTED array elements\n");
    for(unsigned int i = 0; i < length; ++i){
        printf("Input arr[%u]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nInput search query: ");
    scanf("%d", &query);
    
    printf("\nChoose search algorithm\n");
    printf("S. Sequential Search\n");
    printf("B. Binary Search\n");
    printf("Input choice (S/B): ");
    scanf(" %c", &algo);
    
    switch(algo){
        case 's': case 'S':
            result = seq_search(query);
            break;
        
        case 'b': case 'B':
            result = bin_search(query);
            break;
            
        default:
            printf("\nInvalid choice.\n");
            return -1;
    }
    
    if(result == NOT_FOUND){
        printf("Element not found.");
    } else{
        printf("Element found at index %d", result);
    }
    
    return 0;
}

int seq_search(int query){
    for(unsigned int i = 0; i < length; ++i){
        if(arr[i] == query){
            return i;
        }
    }
    
    return NOT_FOUND;
}

int bin_search(int query){
    unsigned int left = 0;
    unsigned int right  = length - 1;
    unsigned int middle = (left+right)/2;
    
    while(arr[middle] != query && left <= right){
        if(query < arr[middle]){
            right =  middle - 1;
        } else{
            left = middle + 1;
        }
        
        middle = (left+right)/2;
    }
    
    return ((arr[middle]==query) ? (middle):(NOT_FOUND));
}