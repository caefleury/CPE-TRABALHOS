/*
Faça um programa que permita a entrada de dois vetores de duas componentes no plano (x, y) e 
logo mostre o produto vetorial entre do primeiro vezes o segundo indicando que o resultado está no eixo z, ou seja,na direção do versor k.  
Exemplo entrada: [2 3] e [4 1] saída:  -10 k já que  (2 3)x(4  1)= 4x3-2x1=10. 
*/

#include <iostream>

using namespace std;

int main() {
    int vetor1[2],vetor2[2];

    cout << "Vetor A"<<endl;
    cout << "Módulo da direção x: "<<endl;
    cin >> vetor1[0];
    cout << "Módulo da direção y: "<<endl;
    cin >> vetor1[1];

    cout << "Vetor B"<<endl;
    cout << "Módulo da direção x: "<<endl;
    cin >> vetor2[0];
    cout << "Módulo da direção y: "<<endl;
    cin >> vetor2[1];

    cout << "Produto vetorial: "<< (vetor1[0]*vetor2[1])-(vetor1[1]*vetor2[0]) << "k"<< endl;
}
