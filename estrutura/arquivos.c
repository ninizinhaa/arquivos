#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
  FILE * arquivo;
  arquivo = fopen("DadosEntrada.csv", "r");
  if (arquivo == NULL) {
printf("Erro ao abrir o arquivo.\n");
exit(1);
}
}
