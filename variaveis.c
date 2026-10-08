#include <stdio.h>

int main() { 
   
    int studentID = 15; 
    int studentAge = 23; 
    float studentFee = 75.25; 
    char studentGrade = 'B'; 

    printf("Alunos da Etec\n"); 
    printf("------------------\n"); 
    printf("ID do estudante: %d\n", studentID); 
    printf("Idade do aluno: %d\n", studentAge); 
    printf("Frequência: %.2f\n", studentFee); 
    printf("Mensão do aluno: %c\n", studentGrade); 

    return 0; 
}
