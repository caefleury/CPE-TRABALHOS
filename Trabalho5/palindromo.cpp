/*
Palíndromo: Faça um programa em c++ que permita a entrada de uma palavra de 3 caráteres 
e logo diga se essa palavra é um Palíndromo ou não. 
*/

#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;
    if (word[0] == word[2]){
        cout << "Essa palavra É um palindromo";
    } else{
        cout << "Essa palavra NÃO É um palindromo";
    }

}
