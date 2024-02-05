#include <stdio.h>
#include <stdlib.h>

int main(void){

FILE * arquivo = fopen("entrada.txt", "w");
char  ar [100];

if(arquivo == NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
}
else{
    printf("Arquivo criado! ");
}
 fgets(ar, 100, arquivo); 
printf("%s\n", ar); 

if(!fclose(arquivo)){
    printf("Arquivo fechado com sucesso! ");
}
    return 0;
}