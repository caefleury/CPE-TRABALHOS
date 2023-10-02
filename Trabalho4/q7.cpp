#include <iostream>

using namespace std;

int main() {
    int semanasSemBarba = 0;
    int semanasSemCabelo = 0;

    while (semanasSemBarba <= 8 && semanasSemCabelo <= 8) {
        char respostaBarba, respostaCabelo;

        cout << "Você fez a barba esta semana? (S para Sim, N para Não): ";
        cin >> respostaBarba;

        cout << "Você cortou o cabelo esta semana? (S para Sim, N para Não): ";
        cin >> respostaCabelo;

        if (respostaBarba == 'S') {
            semanasSemBarba = 0;
        } else {
            semanasSemBarba++;
        }

        if (respostaCabelo == 'S') {
            semanasSemCabelo = 0;
        } else {
            semanasSemCabelo++;
        }

        if (semanasSemBarba > 8 && semanasSemCabelo > 8) {
            cout << "Você está com uma aparência assustadora de lobisomem e pode assustar as pessoas!\n";
            break;
        } else if (semanasSemBarba > 8) {
            cout << "Você poderá ser confundido com o bom velhinho, Papai Noel!\n";
        } else if (semanasSemCabelo > 8) {
            cout << "Você poderá ser confundido com Sansão, o homem de cabelos longos!\n";
        } else {
            cout << "Você está com uma aparência de galã impecável.\n";
        }
    }

    return 0;
}
