#include "aluno.h"
#include <stdlib.h>

int main(void){
    Aluno *aluno;
    quantidadealuno(aluno);
   aluno = recebe_dados();
    imprime(aluno);
    
    return 0;
}