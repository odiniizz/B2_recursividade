#include "Funcoes.h"

int Funcoes::Somatorio (int n){
    if (n == 1)
        return n;
    return n + Somatorio(n - 1);
};

int Funcoes::MDC(int a, int b){
    if (a % b == 0)
        return b;

    return MDC(b, a%b);
};

int Funcoes::SomatorioDigitos(int c){
    if (c / 10 == 0)
        return c % 10;
    return c % 10 + SomatorioDigitos (c / 10);
};

unsigned long long int Funcoes::Binario(int n){
    if (n / 2 == 0)
        return n % 2;
    return n % 2 + Binario(n / 2) * 10;
};
