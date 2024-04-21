#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char nome[100];
  char telefone[50];
  char curso[50];
  float N1;
  float N2;
} Alunos;

float Calcular_Nota(float N1, float N2){
  float resultado;
  resultado = (N1 + N2) / 2.0;
  return(resultado);
}
  
const char* Aprovado_Reprovado (float media){
  if (media >= 7.0) {
    return ("APROVADO");
  }
  else {
    return ("REPROVADO");
  }
}

int main(){
  system("cls");
  Alunos alunos[100];
  int i = 0;

  FILE *entrada = fopen("DadosEntrada.csv", "r");
  FILE *saida = fopen("SituacaoFinal.csv", "w");
  
  if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        exit(1);
    }
    

  while (fscanf(entrada, "%[^,],%[^,],%[^,],%f,%f\n", alunos[i].nome, alunos[i].telefone, alunos[i].curso, &alunos[i].N1, &alunos[i].N2) != EOF) {
        i++; 
    }

  for (int j = 0; j < i; j++) {
        float media = Calcular_Nota(alunos[j].N1, alunos[j].N2);
        const char* situacao = Aprovado_Reprovado(media);
        fprintf(saida, "%s, %.2f, %s\n", alunos[j].nome, media, situacao);
    }

  fclose(entrada);
  fclose(saida);

}

