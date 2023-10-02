#include <iostream>

using namespace std;

int main() {
    int numInicialVelas, 
    numVelasParaNova, 
    horasIluminacao = 0, 
    velasRestantes;

    cout << "Digite o número inicial de velas: ";
    cin >> numInicialVelas;

    cout << "Digite a quantidade de velas queimadas necessárias para fazer uma nova vela: ";
    cin >> numVelasParaNova;

    horasIluminacao = numInicialVelas;
    velasRestantes = numInicialVelas;

    while (velasRestantes >= numVelasParaNova) {
        int novasVelas = velasRestantes / numVelasParaNova;
        horasIluminacao += novasVelas;
        velasRestantes = novasVelas + (velasRestantes % numVelasParaNova);
    }

    cout << "Horas de iluminação garantida: " << horasIluminacao << " horas" << endl;

    return 0;
}
