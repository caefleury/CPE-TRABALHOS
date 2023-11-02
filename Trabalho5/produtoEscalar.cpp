/*
Um pouco de Álgebra:  Faça um programa que permita a entrada de dois vetores de tamanho 3.
 E logo, mostre o produto escalar entre os dois vetores. 
*/


#include <iostream>

using namespace std;

int main()
{
    int vetor1[3],vetor2[3];

    cout << "Vetor A"<<endl;
    cout << "Módulo da direção x: "<<endl;
    cin >> vetor1[0];
    cout << "Módulo da direção y: "<<endl;
    cin >> vetor1[1];
    cout << "Módulo da direção z: "<<endl;
    cin >> vetor1[2];

    cout << "Vetor B"<<endl;
    cout << "Módulo da direção x: "<<endl;
    cin >> vetor2[0];
    cout << "Módulo da direção y: "<<endl;
    cin >> vetor2[1];
    cout << "Módulo da direção z: "<<endl;
    cin >> vetor2[2];
    
    cout << "Produto escalar: "<< (vetor1[0]*vetor2[0])+(vetor1[1]*vetor2[1])+(vetor1[2]*vetor2[2]) << endl;

    return 0;
}
