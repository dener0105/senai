#include <stdio.h>

int main() {
    int matriz[3][4];
    int i, j;

    // Leitura dos valores
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da matriz
    printf("\nMatriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}