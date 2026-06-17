#include <stdio.h>

int main() {
    int matriz[4][4];
    int maior;
    int linha, coluna;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("digite os elementos %d, %d:  " , i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao: linha %d coluna %d\n", linha + 1, coluna + 1);

    return 0;
}