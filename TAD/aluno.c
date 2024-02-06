#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

struct aluno{

    char nome[20];
    int matricula;
    float IRA;
    int quat;

};
int quat;
int i;
Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno));
    if (estudante==NULL){
        printf("sem menoria!");
        exit(1);
    
    }
    printf("Quantidades de alunos");
     scanf("%d" ,&quat);
    printf("Informe o Nome do Aluno: ");
    scanf(" %[^\n]", estudante->nome);
    printf("Infome a Matricula: do Aluno: ");
    scanf("%d", &estudante->matricula);
    printf("IRA do Aluno: ");
    scanf ("%f",&estudante->IRA );
    return estudante; 
}
void imprime(Aluno *aluno){
    printf("---Dados do aluno---\n Nome: %s \n Matricula %d \n IRA: %f \n", aluno->nome, aluno->matricula, aluno->IRA);
}
void quantidadealuno(Aluno *aluno){
    printf("Quantidades de alunos");
    for (i= 0; i<quat; i++){
        scanf("%d" ,&quat);

    }
    
}  