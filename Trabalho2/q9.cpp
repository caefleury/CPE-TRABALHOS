#include <iostream>
using namespace std;

int  main() {

    int lado, area, perimetro;

    cout << "Digite o tamanho do lado: ";
    cin >> lado;

    area = lado * lado;
    perimetro = lado * 4; 

    cout << "Área do quadrado: " << area << endl;
    cout << "Perímetro do quadrado: " << perimetro;
}