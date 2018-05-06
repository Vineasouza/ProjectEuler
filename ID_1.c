#include <stdio.h>
#include <stdlib.h>

//funcao que soma os multiplos de 3 ate 1000 e retorna o valor da soma
int retornaValor3() {
   //inicializando a variavel soma, onde sera armazenado a soma dos multiplos de 3
   int soma1 = 0;

   //somando os multiplos de 3
   for(int i = 0; i < 1000; i += 3) {
      soma1 = soma1 + i;
   }

   //retornando o valor da total da soma
   return soma1;
}

//funcao que soma os multiplos de 5 ate 1000 e retorna o valor da soma
int retornaValor5() {
   //inicializando a variavel soma, onde sera armazenado a soma dos multiplos de 5
   int soma2 = 0;

   //somando os multiplos de 5
   for(int j = 0; j < 1000; j += 5) {
      soma2 = soma2 + j;
   }

   //retornando o valor da total da soma
   return soma2;
}

//funcao que soma os multiplos de 15 ate 1000 e retorna o valor da soma
int retornaValor15() {
   //inicializando a variavel soma, onde sera armazenado a soma dos multiplos de 15
   int soma3 = 0;

   //somando os multiplos de 15
   for(int k = 0; k < 1000; k += 15) {
      soma3 = soma3 + k;
   }

   //retornando o valor da total da soma
   return soma3;
}

int main(int argc, char const *argv[]) {
   //declarando e inicializando variavel que armazena o resultado
   int resultado = 0;

   //O resultado sera a soma dos multiplos de 3 mais os multiplos de 5 menos
   //os valores que se repetem, que sao os multiplos de 15
   resultado = retornaValor3() + retornaValor5() - retornaValor15();

   //imprimindo o resultado
   printf("A soma dos multiplos de 3 e 5 ate 1000 e -> %i\n", resultado);
   return 0;
}
