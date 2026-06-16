#include <stdio.h>

#define L
#define C
int matriz [L][C]:
int i, j;

for (i = 0; i < NL; i++) {
    for (i = 0; i < NL; i++) {

        printf("Informe Matriz[%d][%d]: ", i+1, j+1);
        scanf("%d", &matriz[i][j]);
        }
}
for (i = 0; i < NL; i++) {
for (j = 0; j < NC; j++)
printf("%5d ", matriz[i][j]);
printf("\n");
}