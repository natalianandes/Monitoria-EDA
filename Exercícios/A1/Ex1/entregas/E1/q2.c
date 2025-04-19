#include <stdio.h>
// Função que troca os valores de duas variáveis usando ponteiros
void trocar(int *a, int *b) {
    int temp = *a; // salva o valor de *a em uma variável temporária
    *a = *b;       // atribui o valor de *b em *a
    *b = temp;     // coloca o valor original de *a em *b
    // agora os valores foram trocados corretamente
}
int main() {
    int x = 10, y = 20; // declara duas variáveis com valores iniciais
    trocar(&x, &y);     // passa os endereços de x e y para a função trocar
                        // com isso podemos acessar e modificar diretamente os valores originais
    printf("x = %d, y = %d\n", x, y); // imprime: x = 20, y = 10 (valores trocados com sucesso)
    return 0;
}
