/*definiçao de novo tipo: aluno */
typedef struct aluno Aluno;
/*função que alocar menoria para uma stuct aluno, recebe os dados via tlecado e retorna um ponteiro parta Aluno*/
Aluno * recebe_dados(void);
/*Função que para imprime dados dos alunos*/
void imprime(Aluno *aluno);

void quantidadealuno(Aluno *aluno);