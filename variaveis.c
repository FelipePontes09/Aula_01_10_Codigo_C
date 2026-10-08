#include <stdio.h>

int main() { 
   
    int studentID = 15; 
    int studentAge = 23; 
    float studentFee = 75.25; 
    char studentGrade = 'B'; 

    printf("Alunos da Etec\n"); 
    printf("------------------\n"); 
    printf("Student id: %d\n", studentID); 
    printf("Student age: %d\n", studentAge); 
    printf("Student fee: %.2f\n", studentFee); 
    printf("Student grade: %c\n", studentGrade); 

    return 0; 
}
