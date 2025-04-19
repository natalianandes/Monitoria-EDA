#include <stdio.h>
// Fun��o que adiciona 1.0 ponto de b�nus a cada nota, usando ponteiros
void atualizaNotas(float *n1, float *n2, float *n3) {
    *n1 += 1.0; // soma 1.0 � nota 1
    *n2 += 1.0; // soma 1.0 � nota 2
    *n3 += 1.0; // soma 1.0 � nota 3
    // OBS: a vers�o original (*n1 += *n1 + 1) estava somando duas vezes o valor da nota, o que � incorreto
}
int main() {
    float nota1 = 7.5, nota2 = 6.0, nota3 = 8.0; // declara e inicializa tr�s notas
    atualizaNotas(&nota1, &nota2, &nota3); // envia os endere�os das vari�veis para a fun��o modificar os valores
    // imprime as notas atualizadas com b�nus
    printf("Nota 1: %.2f\n", nota1); // esperado: 8.50
    printf("Nota 2: %.2f\n", nota2); // esperado: 7.00
    printf("Nota 3: %.2f\n", nota3); // esperado: 9.00
    return 0;
}
