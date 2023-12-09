/*

um agricultor necessita  armazenar dados acerca de um pomar, os dados são, espécie, 
data em que a árvore foi plantada (com três inteiros referente a dia, mês e ano) e quantidades de kgs da última colheita. 
Faça um programa em c que permita criar, carregar e exibir um vetor do tipo pomar cujo tamanho será ingressado por teclado. 

*/

#include <iostream>

using namespace std;

struct pomar{
    string especie;
    struct data{
        int dia;
        int mes;
        int ano;
    }data;
    float colheita;
};

void carregar(pomar *p, int n){
    for(int i = 0; i < n; i++){
        cout << "Digite a especie: ";
        cin >> p[i].especie;
        cout << "Digite o dia: ";
        cin >> p[i].data.dia;
        cout << "Digite o mes: ";
        cin >> p[i].data.mes;
        cout << "Digite o ano: ";
        cin >> p[i].data.ano;
        cout << "Digite a ultima colheita em kgs: ";
        cin >> p[i].colheita;
    }
}

void exibir(pomar *p, int n){
    for(int i = 0; i < n; i++){
        cout << "Especie: " << p[i].especie << endl;
        cout << "Dia: " << p[i].data.dia << endl;
        cout << "Mes: " << p[i].data.mes << endl;
        cout << "Ano: " << p[i].data.ano << endl;
        cout << "Colheita: " << p[i].colheita << endl;
    }
}

int main(){
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    pomar p[n];
    carregar(p, n);
    exibir(p, n);
    return 0;
}