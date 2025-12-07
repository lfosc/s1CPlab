/* Expt 18: Matrix Addition and Multiplication
 * ver: 202512071230
 */

#include <stdio.h>
#define MAX_LEN 100

int
main(){
    int mat_A[MAX_LEN][MAX_LEN];
    int mat_B[MAX_LEN][MAX_LEN];
    int mat_ans[MAX_LEN][MAX_LEN];
    
    unsigned int rows_A = 0;
    unsigned int cols_A = 0;
    unsigned int rows_B = 0;
    unsigned int cols_B = 0;
    unsigned int rows_ans = 0;
    unsigned int cols_ans = 0;
    
    unsigned int i = 0;
    unsigned int j = 0;
    
    char opr = 0; //operation selector
    
    printf("Operation List:\n");
    printf("A. Addition\n");
    printf("M. Multiplication\n");
    printf("Please input operation (A/M): ");
    scanf("%c", &opr);
    
    printf("\nMatrix A: Input rows: ");
    scanf("%u", &rows_A);
    printf("Matrix A: Input cols: ");
    scanf("%u", &cols_A);
    printf("Matrix B: Input rows: ");
    scanf("%u", &rows_B);
    printf("Matrix B: Input cols: ");
    scanf("%u", &cols_B);
    
    //dimension compatibility check
    switch(opr){
        case 'a': case 'A':
            if((rows_A != rows_B)||(cols_A != cols_B)){
                printf("\nMatrices cannot be added");
                return 1;
            }
            
            rows_ans = rows_A;
            cols_ans = cols_A;
            break;
            
        case 'm': case 'M':
            if(cols_A != rows_B){
                printf("\nMatrices cannot be multiplied");
                return 1;
            }
            
            rows_ans = rows_A;
            cols_ans = cols_B;
            break;
            
        default:
            printf("\nInvalid operation");
            return -1;
    }
    
    printf("\nInput Matrix A\n");
    for(i = 0; i < rows_A; ++i){
        for(j = 0; j < cols_A; ++j){
            printf("Input mat_A[%u][%u]: ", i, j);
            scanf("%d", &mat_A[i][j]);
        }
    }
    printf("\nInput Matrix B\n");
    for(i = 0; i < rows_B; ++i){
        for(j = 0; j < cols_B; ++j){
            printf("Input mat_B[%u][%u]: ", i, j);
            scanf("%d", &mat_B[i][j]);
        }
    }
    switch(opr){
        case 'a': case 'A':
            for(i = 0; i < rows_ans; ++i){
                for(j = 0; j < cols_ans; ++j){
                    mat_ans[i][j] = mat_A[i][j] + mat_B[i][j];
                }
            }
            
            break;
            
        case 'm': case 'M':
            for(i = 0; i < rows_ans; ++i){
                for(j = 0; j < cols_ans; ++j){
                    unsigned int k = 0;
                    mat_ans[i][j] = 0;
                    for(; k < cols_A; ++k){
                        mat_ans[i][j] += mat_A[i][k] * mat_B[k][j];
                    }
                }
            }
            
            break;
            
        default:
            printf("Unexpected exception encountered");
            return -1;
    }
    
    printf("\nMatrix A\n");
    for(i = 0; i < rows_A; ++i){
        for(j = 0; j < cols_A; ++j){
            printf("%d\t", mat_A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B\n");
    for(i = 0; i < rows_B; ++i){
        for(j = 0; j < cols_B; ++j){
            printf("%d\t", mat_B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Result\n");
    for(i = 0; i < rows_ans; ++i){
        for(j = 0; j < cols_ans; ++j){
            printf("%d\t", mat_ans[i][j]);
        }
        printf("\n");
    }
}