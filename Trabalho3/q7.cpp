#include <iostream>
using namespace std;

int  main() {

    int ladoA, ladoB, area, perimetro;
    char opcao;

    cout << "Digite o tamanho do lado A do retangulo: ";
    cin >> ladoA;

    cout << "Digite o tamanho do lado B do retangulo: ";
    cin >> ladoB;

    if (ladoA < 0 || ladoB <0){
        cout << "Valores invalidos" << endl;
        return 0;
    }

    cout << "O que você deseja saber?: "<< endl;
    cout << "A - Área do retangulo: " << endl;
    cout << "P - Perímetro do retangulo: "<< endl;
    cout << "Digite a sua opção: ";
    cin >> opcao;

    area = ladoA * ladoB;
    perimetro = ladoA * 2 + ladoB * 2; 

    if (opcao == 'A'){
        cout << "Área do quadrado: " << area << endl;
    } else {
        cout << "Perímetro do quadrado: " << perimetro;
    }
}