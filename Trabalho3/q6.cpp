#include <iostream>
using namespace std;

int  main() {

    char unidade;
    double temp;
    int conversao;
    double celcius,farenheit,kelvin;

    cout << "Digite a Unidade da sua temperatura:"<< endl;
    cout << "C - Celcius:"<< endl;
    cout << "F - Farenheit:"<< endl;
    cout << "K - Kelvin:"<< endl;
    cout << "Unidade: ";
    cin >> unidade;

    switch (unidade){
        case 'C':
            cout << "Digite a temperatura em Celcius: ";
            celcius = temp;
            farenheit = (9* temp + 160) / 5;
            kelvin = temp + 273;
            break;
        case 'F':
            cout << "Digite a temperatura em Farenheit: ";
            farenheit = temp;
            celcius = (temp - 32)/ 1.8;
            kelvin = (temp - 32) * (5/9) + 273;
            break;
        case 'K':
            cout << "Digite a temperatura em Kelvin: ";
            kelvin = temp;
            celcius = temp - 273;
            farenheit = (temp - 273) * 1.8 + 32;
            break;
    }

    cin >> temp;

    cout << "Qual conversão você gostaria de ver:"<< endl;
    cout << "1 - Fraenheit:"<< endl;
    cout << "2 - Kelvin:"<< endl;
    cout << "3 - Celcius:"<< endl;
    cout << "Digite o número da unidade correspondente: ";
    cin >> conversao;

    if (!(conversao == 1 || conversao == 2 || conversao == 3)){
        cout << "Escolha invalida";
        return 0;
    }

    switch (conversao){
        case 1:
            cout << "Temperatura em Farenheit: " << farenheit;
            break;
        case 2:
            cout << "Temperatura em Kelvin: " << kelvin;
            break;
        case 3:
            cout << "Temperatura em Celcius: " << celcius;
            break;
    }

    return 0;
}