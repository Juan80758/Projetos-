#include <stdio.h>
#include <math.h>

int operadorValido(char operador);

int main(){
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero aqui: \n");
    scanf(" %f", &num1);

    printf("Digite agora o operador: \n");
    scanf(" %c", &operador);

    if (operadorValido(operador) == 0) {
        printf ("Operador inválido! \n");
        return 1;
    }

    printf("Digite o segundo numero agora: \n");
    scanf(" %f", &num2);

    if(operador == '+') {
        resultado = num1 + num2;
    } else if(operador == '-') {
        resultado = num1 - num2;
    } else if(operador == '*') {
        resultado = num1 * num2;
    } else if(operador == '/') {
        if(num2 == 0) {
            printf("Numero invalido, por favor coloque outro numero \n");
            return 1;
        } else {
            resultado = num1 / num2;
        }
    } else if (operador == '^') {
        resultado = pow(num1, num2);
    }

    printf("O resultado foi: %.2f \n", resultado);

    system("pause");

    return 0;
}

   int operadorValido(char operador) {
    if (operador == '+' || operador == '-' || operador == '*' || operador == '/' || operador == '^') {
        return 1;
    } else {
        return 0;
    }

}