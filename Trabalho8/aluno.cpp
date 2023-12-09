/*
Faça um programa que permita criar um registro chamado aluno que possua dois campos  um inteiro matricula e um float nota.
A continuação, na função main, será criado um vetor do tipo alunos que contenha 3 elementos. 
Logo o vetor deve ser preenchido e exibido.
*/

#include <iostream>

using namespace std;

struct aluno{
    int matricula;
    float nota;
};

int main() {
    aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite a matricula do aluno " << i + 1 << ": ";
        cin >> alunos[i].matricula;
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> alunos[i].nota;
    }

    cout << endl << "Alunos cadastrados:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Aluno " << i + 1 << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Nota: " << alunos[i].nota << endl;
    }

    return 0;
}