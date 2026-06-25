#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, soma = 0;


    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i > j) {
                soma += matriz[i][j];
            }
        }
    }

  
    printf("Soma abaixo da diagonal = %d\n", soma);

    return 0;
}