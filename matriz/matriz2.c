#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

 
    printf("Digite os 25 elementos da matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }


    printf("Soma: %d\n", soma);

    return 0;
}