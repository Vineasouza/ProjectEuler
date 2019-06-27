#include <stdio.h>

int primo() {
    int resp = 1, primo = 5;
    while(resp <= 10001) {
        primo+=2;
        resp++;
    }
    return primo;
}

int main(int argc, char const *argv[]) {
    int resposta = 0;

    resposta = primo();

    printf("> %d", resposta);

    return 0;
}
