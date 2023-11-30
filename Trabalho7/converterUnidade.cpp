/*
faça um um programa que peça como entrada uma medida em metros e logo apresente um menu de opções:
 1 para converter para km, 2 para converter para pés, 3 para converter para milhas. 
 A continuação chame uma função para fazer a conversão solicitada pelo usuário e finalmente imprima o valor dentro da função main.
*/

#include <iostream>
#include <cmath>

using namespace std;

float converteDistanica(float distancia, int opcao){
    float km, pes, milhas;
    km = distancia / 1000;
    pes = distancia * 3.28084;
    milhas = distancia * 0.000621371;
    switch(opcao){
        case 1:
            return km;
        case 2:
            return pes;
        case 3:
            return milhas;
    }
};

int main(){

    float distancia;
    cout << "Digite o valor da distancia em metros: "<< endl;
    cin >> distancia;

    int opcao;
    cout << "Digite a opção desejada: "<< endl;
    cout << "1- km"<< endl;
    cout << "2- pes"<< endl;
    cout << "3- milhas"<< endl;
    cin >> opcao;

    float distancia_convertida = converteDistanica(distancia,opcao);
    cout << "Distancia convertida: " << distancia_convertida << endl;

    return 0;

}