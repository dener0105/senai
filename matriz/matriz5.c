#include <stdio.h>

int main() {
    int matriz[6][4];
    int pares = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de pares: %d\n", pares);

    return 0;
}