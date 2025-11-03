#include <stdio.h>
int main(){
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero aqui: \n");
    scanf(" %f", &num1);

    printf("Digite agora o operador: \n");
    scanf(" %c", &operador);

    printf("Digite o segundo numero agora: \n");
    scanf(" %f", &num2);

    if(operador == '+') {
        resultado = num1 + num2;
    } else if(operador == '-') {
        resultado = num1 - num2;
    } else if(operador == '*') {
        resultado = num1 * num2;
    }
    printf("O resultado foi: %.2f \n", resultado);

    return 0;
}