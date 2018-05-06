#include <stdio.h>

static unsigned long maiorDivisorComum(unsigned long, unsigned long);
static __inline unsigned long menorMultiploComum(unsigned long, unsigned long);


int main(int argc, char const *argv[]) {
    unsigned long resposta = 1;
    unsigned long i;

    for(i = 1; i <= 20; i++) {
        resposta = menorMultiploComum(resposta, i);
    }

    printf("%lu\n", resposta);
    return 0;
}

unsigned long maiorDivisorComum(unsigned long a, unsigned long b) {
    unsigned long r;

    if(a > b) {
        unsigned long t;
        t = a;
        a = b;
        b = t;
    }

    while( r = a % b) {
        a = b;
        b = r;
    }

    return b;
}

unsigned long menorMultiploComum(unsigned long a, unsigned long b) {
    unsigned long long p = (unsigned long long)a * b;
    return p / maiorDivisorComum(a, b);
}
