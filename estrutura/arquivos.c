#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
}

int main(){
  FILE * arquivo;
  arquivo = fopen("DadosEntrada.csv", "r");
  if (arquivo == NULL) {
printf("Erro ao abrir o arquivo.\n");
exit(1);
}

 Alunos alunos;
  
}
