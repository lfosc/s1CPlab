/* Expt 25: Marksheet of n students
 * ver: 202512071339
 */

#include <stdio.h>
#define NAME_LEN 100
#define STUDENTS_MAX 100
#define SUBJECT_COUNT 4

struct Student{
    char name[NAME_LEN];
    unsigned int rollno;
    
    double marks[SUBJECT_COUNT];
    double total;
    double percent;
};

int main(){
    struct Student students[STUDENTS_MAX];
    unsigned int n = 0; //number of students
    
    printf("Input number of students: ");
    scanf("%u", &n);
    
    if(n > STUDENTS_MAX){
        printf("\nOut of bounds.\n");
        return -1;
    }
    
    printf("\nInput student details\n");
    for(unsigned int i = 0; i < n; ++i){
        printf("\nInput Details of Student %u\n", (i+1));
        
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%u", &students[i].rollno);
        
        //set total to 0
        students[i].total = 0;
        
        for(unsigned int j = 0; j < SUBJECT_COUNT; ++j){
            printf("Marks in Subject %u: ", (j+1));
            scanf("%lf", &students[i].marks[j]);
            
            //add to total
            students[i].total += students[i].marks[j];
        }
        
        //calculate and percentage. max marks per subject is 100
        students[i].percent = students[i].total/SUBJECT_COUNT;
    }
    
    printf("\nGenerated Marksheet\n");
    printf("%-5s %-15s %-10s %-12s %-10s\n", 
           "Sl.No.", "Name", "Roll No.", "Total Marks", "Percentage");
    for(unsigned int i = 0; i < n; ++i){
       printf("%-5u  %-15s %-10u %-12.2lf %-10.2lf\n", 
               (i+1), students[i].name, students[i].rollno, students[i].total, students[i].percent);
    }
    
    return 0;
}