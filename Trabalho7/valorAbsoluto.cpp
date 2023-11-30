/*
Escreva um programa em C que leia 5 valores inteiros e imprima para cada um o seu correspondente valor absoluto.
Para obter o valor absoluto do número construa e utilize uma função chamada Absoluto.

*/

#include <iostream>
#include <cmath>

using namespace std;

int Absoluto(int x){
    if(x < 0){
        return -x;
    }else{
        return x;
    }
}

int main(){
    int x[5];
    for (int i = 0; i < 5; i++){
        cout << "Indique um numero inteiro: " << endl;
        cin >> x[i];
    }
    for (int i = 0; i < 5; i++){
        cout << "Valor absoluto de " << x[i] << ": " << Absoluto(x[i]) << endl;
    }
}
