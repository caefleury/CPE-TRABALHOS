#include <iostream>
using namespace std;

int  main() {

    int reais, cotacao, dolares;

    cout << "Digite o valor em reais: ";
    cin >> reais;
    cout << "Digite a cotação do dolar: ";
    cin >> cotacao;

    dolares = reais / cotacao;

    cout << "Valor guardado em dolares: " << dolares;
}