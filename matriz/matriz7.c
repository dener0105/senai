#include <stdio.h>

int main() {
    int matriz[5][3];
    int i, j, coluna;


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

 
    printf("Digite a coluna  (0 a 2): ");
    scanf("%d", &coluna);

    if(coluna >=3){
        printf("valor invalido");
    }else{

    printf("\nValores da coluna %d:\n", coluna);
    for (i = 0; i < 5; i++) {
        printf("%d\n", matriz[i][coluna]);
    }

       }
          return 0;
}