#include<stdio.h>

int main(){


    //1 criar variável x e passar na valor na instanciação
    int x = 15;
    //2 Cria variável y e passar na valor na instanciação
    int y = 25;  
    //3 Cria variável que soma as variáveis x e y
    int soma = x+y; 

    //%D = doble serve para números com ponto flutuante(nossa vírgula)
    //%I = int armazena números inteiros
    printf(" O valor do x eh:%d\n",x);
    printf(" O valor do y eh:%d\n", y);
    printf(" A soma de x e y eh:%d\n", soma );
    return 0;

}