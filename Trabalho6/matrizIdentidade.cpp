/*
5) Faça um programa em c++ que inicialmente solicite a entrada de um número n, 
e logo permita a entrada de uma matriz de de números inteiros  nxn.
 A seguir informe ao usuário se a matriz é identidade ou não.

*/

#include <iostream>

using namespace std;

int main(){
    cout << "Indique o tamanho da sua matriz" << endl;
    int n;
    cin >> n;

    int matriz[n][n];
    /* Criador de matriz*/
    for (int l=0;l < n;l++){
    cout << "Digite os itens da " << l + 1 << "ª linha" << endl;
        for (int c = 0; c < n; c++){
            cout << "Digite o " << c + 1 << "º valor" << endl;
            cin >> matriz[l][c];
        }
    }
    /* Verficador de matriz identidade*/
    bool identidade = true;
    for (int l=0;l < n;l++) {  
        for (int c = 0; c < n; c++){
            if ((matriz[l][c] != 1 && l == c) || (matriz[l][c] != 0 && l != c)){
                identidade = false;
                cout << "A matriz não é identidade" << endl;
                break;
            } 
        }
        if (!identidade){
            break;
        }
    }

    if (identidade){
        cout << "A matriz É identidade" << endl;
    }

    return 0;
}