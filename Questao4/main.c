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

  struct tm *date_start; 
  time(&start);  
  date_start = localtime(&start);
  fprintf(log, "Data: %d/%d/%d\n", date_start->tm_mday, date_start->tm_mon+1, date_start->tm_year+1900);
  fprintf(log, "Inicio do programa: %d:%d:%d\n", date_start->tm_hour, date_start->tm_min, date_start->tm_sec);
 
  do{
    scanf("%s", SAIR);
  } while (strcmp(SAIR, "SAIR") != 0);

  struct tm *date_end;
  time(&end);
  date_end = localtime(&end);
  fprintf(log, "Fim do programa: %d:%d:%d\n", date_end->tm_hour, date_end->tm_min, date_end->tm_sec);
  fclose(log);
  // Fim do arquivo

  return 0;
}