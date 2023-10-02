#include <iostream>

using namespace std;

int main() {
    double valorProduto, desconto, novoValor;

    cout << "Digite o valor do produto: R$ ";
    cin >> valorProduto;
    cout << "Digite o valor do desconto: R$ ";
    cin >> desconto;

    novoValor = valorProduto - desconto;

    cout << "Novo valor com desconto: " << novoValor << " reais"<< endl;

    return 0;
}






