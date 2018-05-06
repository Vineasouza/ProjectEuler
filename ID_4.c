#include <stdio.h>
#include <stdlib.h>

int inverte_retorna(int numero) {
   int aux = 0;

   while (numero != 0) {
      aux = aux * 10 + (numero % 10);
      numero = numero / 10;
   }

   return aux;
}

int main(int argc, char const *argv[]) {
    int numero = 0;
    int maior = 0;

    for (int i = 100; i < 999; i++) {
        for(int j = 100; j < 999; j++) {
            numero = i * j;

            int aux = inverte_retorna(numero);

            if (numero == aux) {
                printf("Numero palindromo -> %d\n", numero);

                if (numero > maior) {
                maior = numero;
                }
            }
        }
    }

    printf("maior -> %d\n", maior);

    return 0;
}
