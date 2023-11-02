/*
O Pomar. Um agricultor  está trabalhando com associação de cultivos. 
Assim, fez um pequeno pomar, no qual  em uma mesma linha plantou 3 frutíferas diferentes, são elas: Pitanga,  Cereja e Guabiroba. 
Para gerenciar seu pomar o agricultor necessita de um programa de computador que permita a entrada de um número n>0  referente à quantidade de plantas em uma linha. 
E logo, permita preencher um vetor de caráteres da seguinte forma : P para a posição de uma pitanga, C para a posição de uma cereja e G para a posição de uma Guabiroba. 
A seguir o programa deve apresentar um menu de opções: 
1 para mostrar quantas pitangas foram plantadas nessa linha, 
2 para saber a quantidade de cerejas, e 
3 para saber a quantidade de Guabirobas. 
E logo, o programa deve exibir a quantidade de plantas que foram plantadas na linha de acordo com o cultivo escolhido. 
Ajude seu professor e faça esse programa utilizando seus conhecimentos de C++.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite a quantidade de plantas na linha: ";
    cin >> n;

    char plantas[n];
    cout << "Digite os tipos de plantas (P para pitanga, C para cereja, G para guabiroba): ";
    for (int i = 0; i < n; i++) {
        cin >> plantas[i];
    }

    int pitangaCount = 0, cerejaCount = 0, guabirobaCount = 0;
    int choice;
    do {
        cout << "Escolha uma opcao:\n1. Quantidade de pitangas\n2. Quantidade de cerejas\n3. Quantidade de guabirobas\n0. Sair\n";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    if (plantas[i] == 'P') {
                        pitangaCount++;
                    }
                }
                cout << "Quantidade de pitangas: " << pitangaCount << endl;
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    if (plantas[i] == 'C') {
                        cerejaCount++;
                    }
                }
                cout << "Quantidade de cerejas: " << cerejaCount << endl;
                break;
            case 3:
                for (int i = 0; i < n; i++) {
                    if (plantas[i] == 'G') {
                        guabirobaCount++;
                    }
                }
                cout << "Quantidade de guabirobas: " << guabirobaCount << endl;
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcão inválida!\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
