#include <iostream>
using namespace std;

int  main() {

    int unidade;
    double temp;
    double celcius,farenheit,kelvin;

    cout << "Digite a sua temperatura em graus Celcius:"<< endl;
    cin >> temp;

    cout << "Digite qual temperatura você gostaria de ver:"<< endl;
    cout << "1 - Farenheit:"<< endl;
    cout << "2 - Kelvin:"<< endl;
    cout << "3 - Celcius:"<< endl;
    cout << "Unidade: ";
    cin >> unidade;

    switch (unidade){
        case 1:
            farenheit = ( temp * 1.8) + 32;
            cout << "Temperatura em ºF: " << farenheit<< endl;
            break;
        case 2:
            kelvin = temp + 273;
            cout << "Temperatura em ºK: " << kelvin << endl;
            break;
        case 3:
            celcius = temp;
            cout << "Temperatura em ºC: " << celcius << endl;
            break;
        default:
            cout << "Escolha invalida" << endl;
    }

    return 0;
}