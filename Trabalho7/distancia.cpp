/*

 Escreva um programa no qual a função main solicitará a entrada das coordenadas de dois pontos (x1, y1) e (x2, y2) 
 e logo chamará uma	função	para calcular e retornar  a	distância	entre	eles.	
 Todos os números e valores	de	 retorno	devem	ser	do	tipo float.

*/

#include <iostream>
#include <cmath>

using namespace std;

float calculaDistancia(float x1,float x2,float y1, float y2){
    float distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return distancia;
};

int main(){
    cout << "Indique as coordenadas do primeiro ponto" << endl;
    float x1,y1;
    cout << "x1: " << endl;
    cin >> x1;
    cout << "y1: " << endl;
    cin >> y1;

    cout << "Indique as coordenadas do segundo ponto" << endl;
    float x2,y2;
    cout << "x2: " << endl;
    cin >> x2;
    cout << "y2: " << endl;
    cin >> y2;

    float distancia = calculaDistancia(x1,x2,y1,y2);
    cout << "Distancia: " << distancia << endl;
}