/*
Faça um programa em c que peça a entrada de um número inteiro positivo n, 
e logo n números consecutivos e os exiba de forma ordenada de maior a menor. 
Observação: os números podem ser negativos.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, temp;
    cout << "Digite o valor de n: ";
    cin >> n;
    int vetor[n];

    for(int i = 0; i < n; i++){
        cout << "Digite o "<<i+1 <<"º número " << ": ";
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vetor[i] < vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    cout << "Vetor ordenado: ";
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}