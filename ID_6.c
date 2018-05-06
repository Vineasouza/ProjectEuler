#include <stdio.h>
#include <math.h>

unsigned long somaDosQuadrados();
unsigned long quadradoDaSoma();

int main(int argc, char const *argv[]) {
    unsigned long x, y, resultado;

    //variaveis recebem valores retornados da funcao
    x = somaDosQuadrados();
    y = quadradoDaSoma();

    //resultado recebe o valor da operacao
    resultado = y - x;

    printf("%lu\n", resultado + 1);
    return 0;
}

//funcao que realiza a soma dos quadrados
unsigned long somaDosQuadrados() {
    unsigned long soma = 0;

    for(int i = 0; i <= 100; i++) {
        soma = soma + pow(i,2);
    }

    return soma;
}

//funcao que realiza o quadrado da soma
unsigned long quadradoDaSoma() {
    unsigned long soma = 0;

    for(int i = 0; i <= 100; i++) {
        soma = soma + i;
    }

    return pow(soma,2);
}
