#include "Funcoes.h"

using namespace std;

int main(){
    Funcoes F;
    int op, x, a, b, c, d;
    do{
        system("clear");
        cout << "Bem-vindo ao pograma!" << endl;
        cout << "1 - Calcular o somatório de 1 a N" << endl;
        cout << "2 - Calcular o MDC de dois números" << endl;
        cout << "3 - Calcular a soma dos dígitos de um número" << endl;
        cout << "4 - Converter de decimal para binário" << endl;
        cout << "5 - Finalizar o programa" << endl;
        cout << endl;
        cout << "Digite sua opção:" << endl;
        cin >> op;

        switch(op){
            case 1:
                cout << "Todos os números entre 1 e o número digitado serão somados." << endl;
                cout << "Digite um número inteiro:" << endl;
                cin >> x;
                cout << "O somatório dos números é: " << F.Somatorio(x) << endl;;
            break;

            case 2:
                cout << "Será calculado o MDC dos dois número inteiros digitados, através do método de Euclides." << endl;
                cout << "Digite dois números inteiros:" << endl;
                cin >> a;
                cin >> b;
                cout << "O MDC do número " << a << " e o número " << b << " é: " << F.MDC(a, b) << endl;
            break;

            case 3:
                cout << "Todos os digitos do número digitado serão somados." << endl;
                cout << "digite um número inteiro:" << endl;
                cin >> c;
                cout << "O somatório dos digitos do número " << c << " é: " << F.SomatorioDigitos(c) << endl;
            break;

            case 4:
                cout << "O número decimal digitado será convertido para binário." << endl;
                cout << "Digite um número inteiro:" << endl;
                cin >> d;
                cout << "o número " << d << " convertido em binário é igual a: " << F.Binario(d) << endl;
            break;

            case 5:
                cout << "Obrigado por utilizar o programa!";
            break;

            default:
                cout << "Opção inválida!" << endl;
        }
        cin.ignore().get();

    }while (op != 5);

    return 0;
}
