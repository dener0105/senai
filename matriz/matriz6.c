#include <stdio.h>

int main() {
    int matriz[4][5];
    int i, j, linha;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite a linha (0 a 3): ");
    scanf("%d", &linha);

    printf("\nLinha escolhida:\n");
    for (j = 0; j < 5; j++) {
        printf("%d ", matriz[linha][j]);
    }

    printf("\n");

    return 0;
}