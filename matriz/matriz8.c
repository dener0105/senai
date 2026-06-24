#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {6, 8, 1, 9, 4},
        {6, 7, 8, 1, 1},
        {2, 3, 1, 6, 3},
        {7, 8, 5, 3, 1},
        {3, 4, 4, 7, 9}
    };

    printf("Diagonal:\n");

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (linha == coluna) {
                printf("%d\n", matriz[linha][coluna]);
            }
        }
    }

    return 0;
}