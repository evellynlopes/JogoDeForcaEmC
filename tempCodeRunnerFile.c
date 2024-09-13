#include <stdio.h>

// Enumerações para aprovação e reprovação
typedef enum {
  APROVADO,
  REPROVADO
} Situacao;

int main() {
  // Declaração de variáveis
  int nota;
  Situacao situacao;

  // Leitura da nota
  printf("Digite a nota do aluno: ");
  scanf("%d", &nota);

  // Determinação da situação
  if (nota >= 60) {
    situacao = APROVADO;
  } else {
    situacao = REPROVADO;
  }

  // Impressão da situação
  printf("A situação do aluno é: %s\n", (situacao == APROVADO) ? "Aprovado" : "Reprovado");

  return 0;
}