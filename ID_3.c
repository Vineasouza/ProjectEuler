#include <stdio.h>
#include <stdlib.h>

//funcao que encontra o maior fator primo de 600851475143
int maiorFatorPrimo() {
   unsigned long long n = 600851475143;
   unsigned long long i;

   //encontrando os fatores
   for (i = 2; i < n; i++) {
     while (n % i == 0) {
       n /= i;
     }
   }
   //imprimindo o maior fator primo
   printf("%llu\n", n);
}

int main(int argc, char const *argv[]) {
   //chamando a função que imprime o maior fator primo de 600851475143
   maiorFatorPrimo();
   return 0;
}
