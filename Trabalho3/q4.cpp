#include <iostream>

using namespace std;

int main()
{
    double num1,num2,num3,maior,menor;
    cout << "Digite o primeiro numero:" ;
    cin >> num1;
    cout << "Digite o segundo numero:" ;
    cin >> num2;
    cout << "Digite o terceiro numero:" ;
    cin >> num3;

    maior = num1;
    menor = num1;

    if (num2 > maior){
        maior = num2;
    }
    if (num3 > maior){
        maior = num3;
    }

    if (num2 < menor){
        menor = num2;
    }
    if (num3 < menor){
        menor = num3;
    }

    cout << "O maior número:" << maior << endl;
    cout << "O menor número:" << menor;
}
