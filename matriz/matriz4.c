#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    float media;

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    
    media = soma / 9.0;

    printf("Soma = %d\n", soma);
    printf("Média = %.1f\n", media);

    return 0;
}