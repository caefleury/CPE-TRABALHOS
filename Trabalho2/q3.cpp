#include <iostream>
using namespace std;

int  main() {

    int cateto1, cateto2,area;

    cout << "Calculadora de área de um triângulo" << endl;
    cout << "Digite o primeiro cateto: " ;
    cin >> cateto1;

    cout << "Digite o segundo cateto: " ;
    cin >> cateto2;

    area = (cateto1 * cateto2) / 2;

    cout << "Área do triângulo: " << area;
}