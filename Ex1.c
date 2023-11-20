#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ponteiroInteiro = &inteiro;
    float *ponteiroReal = &real;
    char *ponteiroChar = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    (*ponteiroInteiro) = 20;
    (*ponteiroReal) = 2.71;
    (*ponteiroChar) = 'B';

    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

}
