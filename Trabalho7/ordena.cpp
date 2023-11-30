/*
Faça um programa em c++ que inicialmente solicite a entrada de um número n inteiro e maior do que 1,
e logo chame uma função F0 que permitirá carregar um vetor números reais de dimensão n.
E logo, a função F0 chamará uma função F1 para ordenar o vetor de maior a menor. 
Então, a função F1 chamará uma terceira função F2 para mostrar o vetor de forma ordenada.
*/

#include <iostream>
#include <cmath>

using namespace std;

void F2(float vetor[],int n){
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
};


void F1(float vetor[],int n){
    float aux;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(vetor[j] < vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
    F2(vetor,n);
};

void F0(int n){
    float vetor[n];
    for(int i = 0; i < n; i++){
        cout << "Digite o valor do elemento " << i + 1 << " do vetor: " << endl;
        cin >> vetor[i];
    }
    F1(vetor,n);
};

int main(){
    int n;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> n;
    F0(n);
}

