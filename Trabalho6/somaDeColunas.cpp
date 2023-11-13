/*
Faça um programa em c++ que permita a entrada de uma matriz de 3x4 
e logo calcule a soma dos elementos de cada coluna 
e as armazene em um vetor e logo exiba esse vetor.

*/

#include <iostream>

using namespace std;

int main() {

    int matriz[3][4];
    int vetor[4];
    /* Criador de matriz */
    for (int l=0;l < 3;l++){
        cout << "Digite os itens da " << l + 1 << "ª linha" << endl;
        for (int c = 0; c < 4; c++){
            cout << "Digite o " << c + 1 << "º valor" << endl;
            cin >> matriz[l][c];
        }
    }
    /* Somador de colunas */
    for (int c = 0; c < 4; c++){
        int soma = 0;
        for (int l = 0; l < 3; l++){
            soma += matriz[l][c];
        }
        vetor[c] = soma;
    }

    /* Exibidor de vetor */
    cout << "[ " ;
    for (int i = 0; i < 4; i++){
        cout << vetor[i] << " ";   
    }
    cout << "]";

    return 0;
}