#include <stdio.h>
// Função que dobra o valor de um inteiro usando ponteiro
void dobra(int *n) {
    *n = *n * 2; // acessa o valor apontado por 'n' e o multiplica por 2
}
int main() {
    int x = 4;           // declara uma variável inteira x com valor inicial 4
    dobra(&x);           // passa o endereço de x para a função 'dobra'
                         // dentro da função, o valor de x será modificado diretamente
    printf("%d\n", x);   // imprime o novo valor de x, que agora é 8
                         // nessa questão, o ponteiro permite alterar diretamente o valor original
                         // como x era 4, após dobrar se torna 8; se fosse 2, viraria 4; se fosse 6, viraria 12
    return 0;
}
