#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void) {
  char SAIR[4];

  time_t start;
  time_t end;

  // Início do arquivo
  FILE* log; 
  log = fopen("log.txt", "a");

  struct tm *data_inicio; 
  time(&start);  
  data_inicio = localtime(&start);
  fprintf(log, "Data: %d/%d/%d\n", data_inicio->tm_mday, data_inicio->tm_mon+1, data_inicio->tm_year+1900);
  fprintf(log, "Inicio: %d:%d:%d\n", data_inicio->tm_hour, data_inicio->tm_min, data_inicio->tm_sec);
 
  do{
    scanf("%s", SAIR);
  } while (strcmp(SAIR, "SAIR") != 0);

  struct tm *data_fim;
  time(&end);
  data_fim = localtime(&end);
  fprintf(log, "Fim: %d:%d:%d\n", data_fim->tm_hour, data_fim->tm_min, data_fim->tm_sec);
  fclose(log);
  // Fim do arquivo

  return 0;
}