/* Expt 20a: Sort Names (Bubble Sort Version)
 * ver: 202512071256
 */

#include <stdio.h>
#include <string.h>
#define NAME_LEN 100
#define NAME_MAX 100

int
main(){
    char names[NAME_MAX][NAME_LEN];
    unsigned int name_count = 0;
    
    printf("Input the number of names to sort: ");
    scanf("%u", &name_count);
    
    printf("\nInput names\n");
    for(unsigned int i = 0; i < name_count; ++i){
        printf("Input name %u of %u: ", (i+1), name_count);
        scanf("%s", names[i]);
    }
    
    //sort names using bubble sort
    for(unsigned int i = 0; i < (name_count - 1); i++){
        for(unsigned int j = 0; j < (name_count - i - 1); j++){
            if(strcmp(names[j], names[j+1]) > 0){
                //swap
                char temp[NAME_LEN];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    
    printf("\nNames alphabetized in ascending order:\n");
    for(unsigned int i = 0; i < name_count; ++i){
        printf("%u. %s\n", (i+1), names[i]);
    }
    
    return 0;
}