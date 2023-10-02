#include <iostream>
using namespace std;

int  main() {

    int celcius, farenheit;

    cout << "Conversor de unidade de temperatura C -> F" << endl;
    cout << "Digite a temperatura em celcius: " ;
    cin >> celcius;

    farenheit = (9*celcius+160) / 5;

    cout << "Temperatura em farenheit: " << farenheit;
}