#include <stdio.h>
#include <stdlib.h>

//funcao que inverte o numero e retorna para uma variavel auxiliar
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

    //multilica os valores no looping
    for (int i = 100; i < 999; i++) {
        for(int j = 100; j < 999; j++) {
            numero = i * j;

            int aux = inverte_retorna(numero);

            //verifica se o valor é igual ao inverso do valor passado pelo looping
            if (numero == aux) {
                printf("Numero palindromo -> %d\n", numero);

                //guarda o maior valor
                if (numero > maior) {
                maior = numero;
                }
            }
        }
    }

    printf("maior -> %d\n", maior);

    return 0;
}
