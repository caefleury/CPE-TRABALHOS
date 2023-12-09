/*


faça um programa que permita criar um registro chamado polar que terá dois campos um módulo e um ângulo.   
A função main criará uma variável do tipo polar e passará a uma função F1 que permitirá carregar os campos dessa variável 
e logo chamará uma função F2 que converterá os valores de polar para retangular e mostrará o resultado da conversão.

*/


#include <iostream>
#include <cmath>
using namespace std;

struct polar{
    float modulo;
    float angulo;
};

void F1(polar *p){
    cout << "Digite o modulo: ";
    cin >> p->modulo;
    cout << "Digite o angulo: ";
    cin >> p->angulo;
}

void F2(polar *p){
    float x, y;
    x = p->modulo * cos(p->angulo);
    y = p->modulo * sin(p->angulo);
    cout << "O valor de x é: " << x << endl;
    cout << "O valor de y é: " << y << endl;
}

int main(){
    polar p;
    F1(&p);
    F2(&p);
    return 0;
}

