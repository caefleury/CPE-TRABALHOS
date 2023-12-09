/*

faça um programa que permita criar um registro chamado pessoa e que possua dois campos  um identificação e outro endereço. 
O campo identificação será outro registro de três campos uma string para nome, e um inteiro para a idade e um caráter para sexo. 
Por outro lado, o endereço será outro registro com um campo para cidade e um campo para bairro. 
O campo bairro será também um registro com dois campos um inteiro para número da rua e uma string para  nome do bairro. 
Na main será criada uma variável do tipo pessoa que terá todos os seus campos preenchidos e apresentados.

*/

#include <iostream>

using namespace std;

struct pessoa{
    struct identificacao{
        string nome;
        int idade;
        char sexo;
    }identificacao;
    struct endereco{
        string cidade;
        struct bairro{
            int numero;
            string nome;
        }bairro;
    }endereco;
};

int main(){
    pessoa p;
    cout << "Digite o nome: ";
    cin >> p.identificacao.nome;
    cout << "Digite a idade: ";
    cin >> p.identificacao.idade;
    cout << "Digite o sexo: ";
    cin >> p.identificacao.sexo;
    cout << "Digite a cidade: ";
    cin >> p.endereco.cidade;
    cout << "Digite o numero do bairro: ";
    cin >> p.endereco.bairro.numero;
    cout << "Digite o nome do bairro: ";
    cin >> p.endereco.bairro.nome;
    cout << "Nome: " << p.identificacao.nome << endl;
    cout << "Idade: " << p.identificacao.idade << endl;
    cout << "Sexo: " << p.identificacao.sexo << endl;
    cout << "Cidade: " << p.endereco.cidade << endl;
    cout << "Numero do bairro: " << p.endereco.bairro.numero << endl;
    cout << "Nome do bairro: " << p.endereco.bairro.nome << endl;
    return 0;
}

