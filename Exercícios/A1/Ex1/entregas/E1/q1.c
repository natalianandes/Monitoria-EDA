#include <stdio.h>
// Fun��o que dobra o valor de um inteiro usando ponteiro
void dobra(int *n) {
    *n = *n * 2; // acessa o valor apontado por 'n' e o multiplica por 2
}
int main() {
    int x = 4;           // declara uma vari�vel inteira x com valor inicial 4
    dobra(&x);           // passa o endere�o de x para a fun��o 'dobra'
                         // dentro da fun��o, o valor de x ser� modificado diretamente
    printf("%d\n", x);   // imprime o novo valor de x, que agora � 8
                         // nessa quest�o, o ponteiro permite alterar diretamente o valor original
                         // como x era 4, ap�s dobrar se torna 8; se fosse 2, viraria 4; se fosse 6, viraria 12
    return 0;
}
