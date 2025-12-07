#include <math.h>
#include <stdio.h>

int main() {

  char continuar;

  do {

    float num1, num2;
    int operador;

    printf("Digite o primeiro numero aqui: \n");
    scanf(" %f", &num1);

    printf("Digite o segundo numero agora: \n");
    scanf(" %f", &num2);

    printf("Qual operação vai realizar? \n");
    printf(" 1 - Adicao \n");
    printf(" 2 - Subtracao \n");
    printf(" 3 - Multiplicacao \n");
    printf(" 4 - Divisao \n");
    printf(" 5 - Exponenciacao \n");
    scanf(" %d", &operador);

    switch (operador) {
    case 1:
      printf("O resultado da soma eh: %.2f \n", num1 + num2);
      break;

    case 2:
      printf("O resultado da subtracao eh: %.2f \n", num1 - num2);
      break;

    case 3:
      printf("O resultado da multiplicacao eh: %.2f \n", num1 * num2);
      break;

    case 4:
      if (num2 == 0) {
        printf("Numero invalido, por favor coloque outro numero \n");
      } else {
        printf("O resultado da divisao eh de: %.2f \n", num1 / num2);
      }
      break;

    case 5: {

    float base, expoente;

    printf("Digite a base: \n");
    scanf("%f", &base);

    printf("Digite o expoente: \n");
    scanf(" %f", &expoente);

    printf("O resultado da exponenciacao eh: %.2f \n", pow(base, expoente) );
    break;

  }
    default:
    printf("Operacao invalida! \n");
    break;
  }
    
      printf("Deseja continuar? (S/N): \n");
      scanf(" %c", &continuar);

  } while (continuar == 'S' || continuar == 's');

  return 0;
}