#include <math.h>
#include <stdio.h>

int main() {

  char continuar;

  do {

    int operador;

    printf("Qual operacao vai realizar? \n");
    printf(" 1 - Adicao \n");
    printf(" 2 - Subtracao \n");
    printf(" 3 - Multiplicacao \n");
    printf(" 4 - Divisao \n");
    printf(" 5 - Exponenciacao \n");
    printf(" 6 - Radiciacao \n");
    scanf(" %d", &operador);

    switch (operador) {
    case 1: { 
    float num1, num2;

      printf("Digite o primeiro numero aqui: \n");
      scanf(" %f", &num1);

      printf("Digite o segundo numero agora: \n");
      scanf(" %f", &num2);

      printf("O resultado da soma eh: %.2f \n", num1 + num2);
      break;
    }

    case 2: {
    float num1, num2;

      printf("Digite o primeiro numero aqui: \n");
      scanf(" %f", &num1);

      printf("Digite o segundo numero agora: \n");
      scanf(" %f", &num2);

      printf("O resultado da subtracao eh: %.2f \n", num1 - num2);
      break;
    }

    case 3: {
    float num1, num2;

      printf("Digite o primeiro numero aqui: \n");
      scanf(" %f", &num1);

      printf("Digite o segundo numero agora: \n");
      scanf(" %f", &num2);

      printf("O resultado da multiplicacao eh: %.2f \n", num1 * num2);
      break;
    }
    case 4: {
      float num1, num2;

      printf("Digite o primeiro numero aqui: \n");
      scanf(" %f", &num1);

      printf("Digite o segundo numero agora: \n");
      scanf(" %f", &num2);

      if (num2 == 0) {
        printf("Numero invalido, por favor coloque outro numero \n");
      } else {
        printf("O resultado da divisao eh de: %.2f \n", num1 / num2);
      }
      break;
    }
    case 5: {

    float base, expoente;

    printf("Digite a base: \n");
    scanf("%f", &base);

    printf("Digite o expoente: \n");
    scanf(" %f", &expoente);

    printf("O resultado da exponenciacao eh: %.2f \n", pow(base, expoente) );
    break;

  }
    case 6: {

      float indice, radicando, resultado;

      printf("Digite o indice \n");
      scanf(" %f", &indice);

      printf("Digite o radicando \n");
      scanf(" %f", &radicando);

      if(indice == 0) {
        printf("Operacao com valor indeterminado \n");
        break;
      } 
        else {
        resultado = pow (radicando, 1.0/indice);
        printf("O resultado sera: %.3f \n", resultado);

        break;
      }
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