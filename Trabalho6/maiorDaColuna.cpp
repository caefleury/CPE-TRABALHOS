/*

 Faça um algoritmo que solicite o preenchimento de uma matriz  de inteiros de tamanho 2x2, 
 e logo mostre o maior elemento de cada coluna.

*/

#include <iostream>

using namespace std;

int main()
{
    int matriz[2][2];
    int maiorColuna[2] = {0, 0};

    for (int i = 0; i < 2; i++)
    {
        cout << "-- Digite os valores da " << i+1 << "ª linha --" << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << "Digite o valor da " << j+1 << "ª coluna" << endl;
            cin >> matriz[i][j];
            if (matriz[i][j] > maiorColuna[j])
            {
                maiorColuna[j] = matriz[i][j];
            }
        }
    }

    cout << "O maior valor da coluna 1 é: " << maiorColuna[0] << endl;
    cout << "O maior valor da coluna 2 é: " << maiorColuna[1] << endl;

    return 0;
}