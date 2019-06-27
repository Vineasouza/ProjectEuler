#include <stdio.h>
#include <math.h>

int isprime(long num) {
    long i;
    for(i = 2; i<= sqrt(num); i++) {
        if(num % i == 0) {
            return 0;
        }
    }

    return 1;
}

long primeNumer(int num) {
    long i;
    int counter = 0;

    for(i = 2;; i++) {
        if(isprime(i)) {
            counter++;
        }
        if(counter == num) {
            break;
        }
    }

    return i;
}

int primo() {
    int resp = 1, primo = 5;
    while(resp <= 10001) {
        primo+=2;
        resp++;
    }
    return primo;
}

int main(int argc, char const *argv[]) {
    int i = 10001;

    printf("> %ld", primeNumer(i));

    return 0;
}
