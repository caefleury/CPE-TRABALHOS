/*
Faça um programa em c++ que permita a entrada de 5 números inteiros e logo substitua todos os números 5 por um 0. 
E finalmente exiba o novo vetor. Exemplo: Entrada: [-1 2 5 4 5],   Saída: [-1 2 0 4 0].
*/

#include <iostream>

using namespace std;

int main()
{
    int vetor[5];

    for(int i = 0; i < 5; i++){
        cout << "Digite o "<<i+1 <<"º número " << ": ";
        cin >> vetor[i];
        if(vetor[i] == 5){
            vetor[i] = 0;
        }
    }

    cout << "Vetor: ";
    cout << "[ ";
    for(int i = 0; i < 5; i++){
        cout << vetor[i] << " ";
    }
    cout << "]";

    return 0;
}