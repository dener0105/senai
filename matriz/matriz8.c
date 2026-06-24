#include <stdio.h>

int main() {
    int matriz[5][5] = {
        {6, 5, 8, 1, 7},
        {1, 3, 7, 7, 7},
        {4, 7, 9, 9, 1},
        {5, 2, 2, 2, 6},
        {6, 9, 2, 1, 0}
    };

    printf("Diagonal:\n");

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (linha == coluna) {
                printf("%d\n", matriz[linha][coluna]);
                else 

                    printf(" \t|  ");
                }
            }
        }
    }

