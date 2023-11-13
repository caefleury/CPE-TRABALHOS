/*

Faça um programa em c++ que inicialmente solicite a entrada de um número n, 
e logo permita a entrada de uma matriz de números reais de nxn. 
A seguir calcule o maior elemento da diagonal principal.

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    float maior = 0;

    cout << "Digite o tamanho da matriz: ";
    cin >> n;

    float matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        cout << "-- Digite os valores da " << i+1 << "ª linha --" << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "Digite o valor da " << j+1 << "ª coluna" << endl;
            cin >> matriz[i][j];
            if (i == j)
            {
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                }
            }
        }
    }

    cout << "O maior valor da diagonal principal é: " << maior << endl;

    return 0;
}