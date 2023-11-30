/*faça um programa que peça a entrada de dois catetos de um triangulo retângulo 
e logo chame uma função para calcular e mostrar a hipotenusa, e outra função para calcular a área do retângulo.
A área deve ser impressa pela função main.*/

#include <iostream>
#include <cmath>

using namespace std;

void calculaHipotenusa(float cateto1,float cateto2){
    float hipotenusa;
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
    cout << "Hipotenusa: " << hipotenusa<<endl;
};

float calculaArea (float base, float altura){
    float area;
    area = (base*altura) / 2;
    return area;
};


int main()
{
    float cateto1,cateto2,area;
    cout << "Digite o valor do primeiro cateto: "<< endl;
    cin >> cateto1;
    
    cout << "Digite o valor do segundo cateto: "<< endl;
    cin >> cateto2;
    
    calculaHipotenusa(cateto1,cateto2);
    
    area = calculaArea(cateto1,cateto2);
    cout << "Area: " << area << endl;
    return 0;
}
