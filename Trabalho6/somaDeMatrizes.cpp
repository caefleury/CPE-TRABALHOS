/*

Faça um programa que permita a entrada de um número n 
e logo permita a entrada de duas matrizes de inteiros de nxn,
 a seguir calcule e exiba a soma das duas matrizes.

*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Digite o tamanho da matriz: ";
    cin >> n;

    int matriz1[n][n];
    int matriz2[n][n];
    int matrizSoma[n][n];

    /* Criador da matriz 1 */
    for (int i = 0; i < n; i++)
    {
        cout << "-- Digite os valores da " << i+1 << "ª linha da matriz 1 --" << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "Digite o valor da " << j+1 << "ª coluna" << endl;
            cin >> matriz1[i][j];
        }
    }

    /* Criador da matriz 2 */
    for (int i = 0; i < n; i++)
    {
        cout << "-- Digite os valores da " << i+1 << "ª linha da matriz 2 --" << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "Digite o valor da " << j+1 << "ª coluna" << endl;
            cin >> matriz2[i][j];
        }
    }

    /* Soma das matrizes */
    for (int i = 0; i < n; i++)
    {
        cout << "-- A soma da " << i+1 << "ª linha é --" << endl;
        for (int j = 0; j < n; j++)
        {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}