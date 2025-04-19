#include <stdio.h>
// Função que calcula a média de dois valores e armazena o resultado em um ponteiro
void media(float n1, float n2, float *resultado) {
    *resultado = (n1 + n2) / 2; // calcula a média e armazena no local apontado por 'resultado'
}
int main() {
    float n1 = 8.5, n2 = 7.5, resultado; // declara duas notas e uma variável para armazenar o resultado
    media(n1, n2, &resultado); // passa os valores e o endereço de 'resultado' para armazenar a média
    printf("Média: %.2f\n", resultado); // esperado: 8.0
    return 0;
}
