    #include <stdio.h>

    void copyArquivo(FILE *arq1, FILE *arq2){
    char ler[1000]; 
    while(fgets(ler, 1000, arq1) != NULL){ 
        fputs(ler, arq2); 
    }
    printf("Arquivo copiado!");
    }

    int main(void) {
    char a1[100];
    char a2[100];

    scanf("%s", a1);
    scanf("%s", a2);

    FILE *arq1 = fopen(a1, "r");
    FILE *arq2 = fopen(a2, "w");

    copyArquivo(arq1, arq2);

    fclose(arq1);
    fclose(arq2);

    return 0;
    }