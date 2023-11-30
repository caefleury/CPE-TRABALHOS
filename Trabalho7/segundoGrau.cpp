/*

Faça um programa que permita a entrada dos coeficientes de uma função de segundo grau. 
Logo chame uma função para calcular as raízes. 
A função que calcula as raízes chamará uma segunda função para calcular e retornar o delta.

*/

#include <iostream>
#include <cmath>

using namespace std;

float calculaDelta(float a,float b,float c){
    float delta = pow(b,2) - 4 * a * c;
    return delta;
};

void calculaRaizes(float a,float b,float c){
    float delta = calculaDelta(a,b,c);
    if ( delta > 0){
        float raiz1 = (-b + sqrt(delta)) / 2*a;
        float raiz2 = (-b - sqrt(delta)) / 2*a;
        cout << "raiz 1: " << raiz1 << endl; 
        cout << "raiz 2: " << raiz2 << endl; 
    } else if (delta == 0.0){
        float raiz = (-b) / 2*a;
        cout << "raiz: " << raiz << endl; 
    } else {
        cout << "Não existe raiz" << endl; 

    }
};

int main()
{
    float a,b,c;
    cout << "Indique os coeficientes de uma função do segundo grau"<<endl;
    cout << "a: " << endl;
    cin >> a;
    cout << "b: " << endl;
    cin >> b;
    cout << "c: " << endl;
    cin >> c;

    calculaRaizes(a,b,c);
};