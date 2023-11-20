#include <stdio.h>

void trocarConteudo(int *ptrX, int *ptrY) {
    int temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
}

int main() {
    int valorX, valorY;

    printf("Digite o valor para X: ");
    scanf("%d", &valorX);

    printf("Digite o valor para Y: ");
    scanf("%d", &valorY);

    trocarConteudo(&valorX, &valorY);

    printf("Valores após a troca:\n");
    printf("X: %d\n", valorX);
    printf("Y: %d\n", valorY);

    return 0;
}
