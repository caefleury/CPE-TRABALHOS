/*

faça um programa que permita criar um registro chamado aluno que possua três campos:
um inteiro matricula e um float nota e um terceiro campo chamado "endereco" e que será outro registro com dois campos um inteiro para o número da rua e um inteiro para o número da casa. 
A continuação, na função main, 
será criado um vetor do tipo alunos que contenha 3 elementos. 
Logo o vetor será preenchido e exibido com todos os seus campos.

*/

#include <iostream>

using namespace std;


struct endereco{
    int numeroRua;
    int numeroCasa;
};

struct aluno{
    int matricula;
    float nota;
    endereco enderecoAluno;
};

int main() {
    aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        cout << "Digite a matricula do aluno " << i + 1 << ": ";
        cin >> alunos[i].matricula;
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> alunos[i].nota;
        cout << "Digite o numero da rua do aluno " << i + 1 << ": ";
        cin >> alunos[i].enderecoAluno.numeroRua;
        cout << "Digite o numero da casa do aluno " << i + 1 << ": ";
        cin >> alunos[i].enderecoAluno.numeroCasa;
    }

    cout << endl << "Alunos cadastrados:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Aluno " << i + 1 << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Nota: " << alunos[i].nota << endl;
        cout << "Numero da rua: " << alunos[i].enderecoAluno.numeroRua << endl;
        cout << "Numero da casa: " << alunos[i].enderecoAluno.numeroCasa << endl;
    }

    return 0;
}