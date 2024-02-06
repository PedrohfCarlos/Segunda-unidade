#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

struct aluno{

    char nome[20];
    int matricula;
    float IRA;

};
Aluno * recebe_dados(void){
    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno));
    if (estudante==NULL){
        printf("sem menoria!");
        exit(1);
    
    }
    printf("Informe o nome do Aluno: ");
    scanf(" %[^\n]", estudante->nome);
    printf("Infome a matricula: do aluno: ");
    scanf("%d", &estudante->matricula);
    printf("ira do aluno");
    scanf ("%f",&estudante->IRA );
    return estudante; 
}
