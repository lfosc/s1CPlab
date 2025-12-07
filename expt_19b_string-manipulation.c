/* Expt 19b: String Manipulation without library functions (Pointer Version)
 * ver: 202512071234
 */

//I do not recommend using this program if you do not understand it.


#include <stdio.h>
#define BUFF_SIZE 1000

unsigned int str_len(char *);
void str_cat(char *, char *);
void str_cpy(char *, char *);
int str_cmp(char *, char *);

int
main(){
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    
    printf("Input str1: ");
    scanf("%s", str1);
    printf("Input str2: ");
    scanf("%s", str2);
    
    printf("\nstr_len(str1) = %u\n", str_len(str1));
    printf("str_len(str2) = %u\n", str_len(str2));
    printf("str_cmp(str1, str2) = %d\n", str_cmp(str1, str2));
    str_cat(str1, str2);
    printf("str_cat(str1, str2): str1 = %s\n", str1);
    str_cpy(str1, str2);
    printf("str_cpy(str1, str2): str1 = %s\n", str1);
    
    return 0;
}

unsigned int str_len(char *str){
    unsigned int len = 0;
    
    while(*str++){
        len++;
    }
    
    return (len);
}

void str_cat(char *s1, char *s2){
    s1 += str_len(s1);
    
    while(*s2){
        *s1++ = *s2++;
    }
    
    *s1 = '\0';
}

void str_cpy(char *dstn, char *src){
    while(*dstn++ = *src++);
}

int str_cmp(char *s1, char *s2){
    while(*s1 && (*s1++ == *s2++));
    
    return(*s1 - *s2);
}