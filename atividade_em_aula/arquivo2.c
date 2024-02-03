#include <stdio.h>
#include <stdlib.h>

int main(void){

FILE *arquivos = fopen("entrada.txt","wt");
if(arquivos==NULL){
    printf("Erro ao abrir o arquivo! ");
    exit(1);
}
else{
    printf("Arquivo criado! ");
}
fclose(arquivos);
    return 0;
}