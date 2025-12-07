/* Expt 26: Pointer to a Structure
 * ver: 202512071341
 */

#include <stdio.h>
#define NAME_LEN 100
#define SUBJECT_COUNT 4

struct Student{
    char name[NAME_LEN];
    unsigned int rollno;
    
    double marks[SUBJECT_COUNT];
    double total;
    double percent;
};

void readDetails(struct Student *);
void evaluate(struct Student *);
void writeDetails(struct Student *);

int main(){
    struct Student s1;
    
    printf("Input student details\n");
    readDetails(&s1);
    
    evaluate(&s1);
    
    printf("\nGenerated Marksheet\n");
    writeDetails(&s1);
    
    return 0;
}

void readDetails(struct Student *s){
    printf("Name: ");
    scanf("%s", s->name);
    printf("Roll Number: ");
    scanf("%u", &(s->rollno));
        
    for(unsigned int i = 0; i < SUBJECT_COUNT; ++i){
        printf("Marks in Subject %u: ", (i+1));
        scanf("%lf", &((s->marks)[i]));
    }
}

void evaluate(struct Student *s){
    unsigned int i = 0;
    s->total = 0;
    
    for(; i < SUBJECT_COUNT; i++){
        (s->total) += (s->marks)[i];
    }
    
    s->percent = (s->total)/SUBJECT_COUNT;
}

void writeDetails(struct Student *s){
    unsigned int i = 0;
    
    printf("Name = %s\n", s->name);
    printf("Roll no. = %u\n", s->rollno);
    
    for(; i < SUBJECT_COUNT; i++){
        printf("Marks in Subject %u = %.2lf\n", (i+1), (s->marks)[i]);
    }
    
    printf("Total Marks = %.2lf\n", s->total);
    printf("Percentage Marks = %.2lf\n", s->percent);
}