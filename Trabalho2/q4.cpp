#include <iostream>

using namespace std;

int main() {
    double valorProduto, newValue;

    cout << "Digite o valor do produto: R$ ";
    cin >> valorProduto;

    newValue = valorProduto - (valorProduto * 0.09);

    cout << "Novo valor atualizado com desconto:" << newValue << endl;

    return 0;
}