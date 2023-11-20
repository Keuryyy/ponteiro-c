#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o valor para var1: ");
    scanf("%d", &var1);

    printf("Digite o valor para var2: ");
    scanf("%d", &var2);

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    if (ptr1 > ptr2) {
        printf("Conteúdo do maior endereço (%p): %d\n", (void *)ptr1, *ptr1);
    } else if (ptr2 > ptr1) {
        printf("Conteúdo do maior endereço (%p): %d\n", (void *)ptr2, *ptr2);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
