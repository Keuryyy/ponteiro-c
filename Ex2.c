#include <stdio.h>

int main() {
    int var1 = 10;
    int var2 = 20;

    int *ptr1 = &var1;
    int *ptr2 = &var2;

    printf("Endereço da variável var1: %p", (void *)ptr1);
    printf("Endereço da variável var2: %p", (void *)ptr2);

    if (ptr1 > ptr2) {
        printf("Maior endereço: %p", (void *)ptr1);
    } else if (ptr2 > ptr1) {
        printf("Maior endereço: %p", (void *)ptr2);
    } else {
        printf("Os endereços são iguais.");
    }

}
