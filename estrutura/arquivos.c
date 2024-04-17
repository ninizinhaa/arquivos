#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  FILE *entrada = fopen("DadosEntrada.csv", "r");
  FILE *saida = fopen("SituacaoFinal.csv", "w");

    if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
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


