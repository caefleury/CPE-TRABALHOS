#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    do {
        cout << "Digite o primeiro número: ";
        cin >> num1;
    } while (num1 < 0 || num1 > 10);

    do {
        cout << "Digite o segundo número: ";
        cin >> num2;
    } while (num2 < 0 || num2 > 10);

    do {
        cout << "Digite o terceiro número: ";
        cin >> num3;
    } while (num3 < 0 || num3 > 10);

    double media = (num1 + num2 + num3) / 3.0;

    if (media >= 5) {
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
