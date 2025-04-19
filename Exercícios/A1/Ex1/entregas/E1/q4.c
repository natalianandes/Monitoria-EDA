#include <stdio.h>
// Função que desloca o valor do segundo inteiro (b) para o primeiro (a)
// e zera o valor do segundo
void deslocar(int *a, int *b) {
    *a = *b; // o valor armazenado em b é copiado para a
    *b = 0;  // o valor de b é zerado
}
int main() {
    int a = 10, b = 7; // declara duas variáveis inteiras com valores iniciais
    deslocar(&a, &b); // passa os endereços de a e b para a função, permitindo alteração direta
    printf("Valor de a: %d\n", a); // esperado: 7 (recebe o valor de b)
    printf("Valor de b: %d\n", b); // esperado: 0 (foi zerado)
    return 0;
}
