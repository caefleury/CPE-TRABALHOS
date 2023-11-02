/*
Faça um algoritmo que solicite o preenchimento de um vetor de inteiros de tamanho 5,
 e logo mostre o maior e o menor elemento do vetor.
*/

#include <iostream>

using namespace std;

int main()
{
    int vetor[5], maior, menor;

    for(int i = 0; i < 5; i++){
        cout << "Digite o "<<i+1 <<"º número " << ": ";
        cin >> vetor[i];
        if(i == 0){
            maior = vetor[i];
            menor = vetor[i];
        }else{
            if(vetor[i] > maior){
                maior = vetor[i];
            }
            if(vetor[i] < menor){
                menor = vetor[i];
            }
        }
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}