#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
  
    FILE *entrada = fopen(argv[1], "r");
    if (entrada == NULL) {
        printf("Não foi possivel abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    char *arr[100]; 
    int i = 0;
    char buffer[100];

    while (fscanf(entrada, "%s", buffer) != EOF) {
        arr[i] = strdup(buffer);
        i++;
    }

    fclose(entrada);

    bubble_sort(arr, i);

    FILE *saida = fopen("arq_palavras_ordenado.txt", "w");
    if (saida == NULL) {
        printf("Não foi possivel abrir o arquivo.\n");
        return 1;
    }

    for (int j = 0; j < i; j++) {
        fprintf(saida, "%s\n", arr[j]);
        free(arr[j]);
    }

    fclose(saida);

    return 0;
}