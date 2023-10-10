#include <iostream>

using namespace std;

int main()
{
    double peso,altura,imc;
    cout << "Digite o seu peso:" ;
    cin >> peso;
    cout << "Digite a sua altura:" ;
    cin >> altura;

    imc = peso / ( altura * altura );

    if (imc < 18.5 ){
        cout << "abaixo do peso";
    } else if (imc < 25) {
        cout << "peso normal";
    } else if (imc < 30 ) {
        cout << "acima do peso";
    } else {
        cout << "obeso";
    };

};
    