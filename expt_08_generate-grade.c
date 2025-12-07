/* Expt 08: Generate Grade
 * ver: 202512071102
 */

#include <stdio.h>
#define MAX_MARK 400

int
main(){
    int rollno = 0;
    unsigned int sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0;
    double total = 0;
    double percentage = 0.0;
    char grade = 0;
    
    printf("Input student details:\n");
    printf("Input Roll Number: ");
    scanf("%d", &rollno);
    printf("Input marks in Subject 01: ");
    scanf("%u", &sub1);
    printf("Input marks in Subject 02: ");
    scanf("%u", &sub2);
    printf("Input marks in Subject 03: ");
    scanf("%u", &sub3);
    printf("Input marks in Subject 04: ");
    scanf("%u", &sub4);
    
    total = sub1 + sub2 + sub3 + sub4;
    percentage = (total/MAX_MARK)*100;
    
    switch((int)percentage/10){
            case 10:
            case 9:
                grade = 'A';
                break;
            
            case 8:
                grade = 'B';
                break;
                
            case 7:
                grade = 'C';
                break;
            
            case 6:
                grade = 'D';
                break;
                
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                grade = 'F';
                break;
                
            default:
                printf("Unexpected exception encountered.\n");
                return -1;
    }
    
    printf("\nStudent roll number = %d\n", rollno);
    printf("Total marks = %.0lf\n", total);
    printf("Percentage = %.2lf\n", percentage);
    printf("Grade = %c\n", grade);
    
    return 0;
}