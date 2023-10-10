
#include <iostream>

using namespace std;

int main()
{
    double nota1,nota2,nota3,media;
    cout << "Digite o primeiro numero:" ;
    cin >> nota1;
    cout << "Digite o segundo numero:" ;
    cin >> nota2;
    cout << "Digite o terceiro numero:" ;
    cin >> nota3;

    media = (nota1+nota2+nota3)/3;
    cout<< "media: " << media << endl;
    
    if (media > 10 || media < 0){
        cout << "Entradas incorretas";
    } else {
        if (media >= 5){
            cout << "aprovado";
        } else {
            cout << "reprovado";
        }
    };
    

}
