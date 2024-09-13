#include <iostream>

using namespace std;

int main() {
    int num1,num2,soma,subtracao,multiplicacao,divisao;
    int opcao;

    printf("seja bem vindo a calculadora!!! \n");

cout << "escolha uma opcao\n";

printf("1 - Soma\n");
printf("2 - Subtrair\n");
printf("3 - Multiplicar\n");
printf("4 - Dividir\n");
scanf("%d", &opcao);

printf ("digite o num1");
scanf("%d",&num1);

printf ("digite o num2");
scanf("%d",&num2);


switch (opcao) {
    case 1:
      printf("A soma de %d e %d e: %d\n", num1, num2, num1 + num2);
      break;
    case 2:
      printf("A subtracao de %d e %d e: %d\n", num1, num2, num1 - num2);
      break;
    case 3:
      printf("A multiplicacao de %d e %d e: %d\n", num1, num2, num1 * num2);
      break;
    case 4:
       printf("A divisao de %d e %d e: %d\n", num1, num2,  num1 * num2);
       break;
}
}