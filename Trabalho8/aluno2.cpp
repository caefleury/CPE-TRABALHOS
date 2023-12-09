/*

 faça um programa que permita criar um registro chamado aluno que possua dois camposum inteiro matricula e um float nota. 
 A continuação. na função main, será criada uma variável do tipo aluno que será passado como parâmetro de uma 
 função F1 que permitirá carregar o registro aluno e retornar para a função main, 
 logo será chamada uma função dois que imprimirá a variável do tipo aluno.

*/

#include <iostream>

using namespace std;

struct aluno{
    int matricula;
    float nota;
};

void F1(aluno *a){
    cout << "Digite a matricula: ";
    cin >> a->matricula;
    cout << "Digite a nota: ";
    cin >> a->nota;
}

void F2(aluno *a){
    cout << "Matricula: " << a->matricula << endl;
    cout << "Nota: " << a->nota << endl;
}

int main(){
    aluno a;
    F1(&a);
    F2(&a);
    return 0;
}

