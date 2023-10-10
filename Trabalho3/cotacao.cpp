#include <iostream>
using namespace std;

int  main() {

    int reais, cotacao, dolares;

    cout << "Digite o valor em dolares: ";
    cin >> dolares;
    cout << "Digite a cotação do dolar: ";
    cin >> cotacao;

    reais = dolares * cotacao;

    if (dolares < 0 || cotacao < 0){
        cout << "Entradas incorretas";
        if (dolares < 0){
            cout <<"Valor em dolares: " << dolares << endl;
        }
        if (cotacao < 0){
            cout << "Cotação: " <<cotacao;
        }
    } else {
        cout << "Quantidade de reais: " << reais;
    }

}