#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    double media = (n1 + n2 + n3) / 3.0;

    cout << "A média dos números é: " << media << endl;

    return 0;

}