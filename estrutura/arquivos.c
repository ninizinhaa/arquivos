#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  FILE *entrada = fopen("DadosEntrada.csv", "r");
  FILE *saida = fopen("SituacaoFinal.csv", "w");
  
if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        exit(1);
      Alunos alunos[100];
    int i = 0;
    while (fscanf(entrada, "%s %s %f %f\n", alunos[i].nome, alunos[i].curso, &alunos[i].N1, &alunos[i].N2) != EOF) {
        i++; }
  
     Separar_cursos(alunos, i);
}

 Alunos alunos;
  
}

typedef Struct{
  char nome[100];
  int numero_telefone[50];
  char curso;
  double N1;
  double N2;
}Alunos;

double Calcular_Nota(double N1, double N2){
  double resultado;
  resultado = (N1 + N2) / 2;
  return(resultado);
  
  if (resultado >= 7) {
    printf("APROVADO");
  }
  else {
    printf("REPROVADO");
  }
}

void Separar_cursos (Alunos alunos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Curso: %s\n", alunos[i].curso);
        printf("Aluno: %s, Notas: %.2f, %.2f\n", alunos[i].nome, alunos[i].N1, alunos[i].N2);
    }
}


