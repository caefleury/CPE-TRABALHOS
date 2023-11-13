/*

Faça um programa em c++ que inicialmente solicite a entrada de um número n e outro número m, 
e logo permita a entrada de uma matriz de números reais de nxm. 
A seguir calcule e exiba a sua transposta, com dois dígitos após a virgula.

*/

#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cout << "Digite o número de linhas: ";
    cin >> n;
    cout << "Digite o número de colunas: ";
    cin >> m;

    double matriz[n][m];
    double transposta[m][n];

    /* Gerador de matriz*/
    for (int i = 0; i < n; i++)
    {
        cout << "-- Digite os valores da " << i+1 << "ª linha --" << endl;
        for (int j = 0; j < m; j++)
        {
            cout << "Digite o valor da " << j+1 << "ª coluna" << endl;
            cin >> matriz[i][j];
        }
    }

    /* Gerador de transposta */
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++){
            transposta[i][j] = matriz[j][i];
        }
    }

    /* Exibe transposta */
    cout << "A matriz transposta é: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "| ";
        for (int j = 0; j < n; j++){
            cout << transposta[i][j] << " ";
        }
        cout << "|" << endl;
    }
    return 0;
}