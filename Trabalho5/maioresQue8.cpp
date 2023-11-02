/*
Faça um programa em c++ que permita a entrada de 5 notas entre 0 e 10, 
as guarde em um vetor de números reais e logo conte e exiba quantos notas maiores que 8 tem no vetor.
Notas menores que 0 e maiores que 10 não devem ser aceitas. 
*/

#include <iostream>

using namespace std;

int main()
{
    float notas[5];
    int notasMaioresQueOito = 0;

    for(int i = 1; i <= 5; i++){
        cout << "Digite a "<<i <<"ª nota " << ": ";
        cin >> notas[i];
        if(notas[i] > 8 && notas[i] <= 10){
            notasMaioresQueOito++;
        }
    }

    cout << "Notas maiores que 8: " << notasMaioresQueOito << endl;

    return 0;
}

