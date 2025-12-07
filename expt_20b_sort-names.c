/* Expt 20b: Sort Names (Selection Sort Version)
 * ver: 202512071249
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
    
    //sort names using exchange selection sort
    for(unsigned int i = 0; i < (name_count-1); ++i){
        unsigned int min = i;
        unsigned int j;
        
        for(j = i+1; j < name_count; ++j){
            if(strcmp(names[min], names[j]) > 0){
                min = j;
            }
        }
        
        if(min != i){
            char temp[NAME_LEN];
            strcpy(temp, names[min]);
            strcpy(names[min], names[i]);
            strcpy(names[i], temp);
        }
    }
    
    printf("\nNames alphabetized in ascending order:\n");
    for(unsigned int i = 0; i < name_count; ++i){
        printf("%u. %s\n", (i+1), names[i]);
    }
    
    return 0;
}