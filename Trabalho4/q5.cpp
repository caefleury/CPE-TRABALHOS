#include <iostream>
using namespace std;

int main() {

    int candidato1 = 0,
    candidato2 = 0,
    candidato3 = 0,
    candidato4 = 0,
    nulos = 0,
    brancos = 0,
    voto;

    while (true)
    {
        cout << " Digite o seu Voto: ";
        cin >> voto;

        if (voto == 0){
            break;
        } else{
            switch (voto){
                case 1:
                    candidato1++;
                    break;
                case 2:
                    candidato2++;
                    break;
                case 3:
                    candidato3++;
                    break;
                case 4:
                    candidato4++;
                    break;
                case 5:
                    nulos += 1;
                    break;
                case 6:
                    brancos += 1;
                    break;
            }
        }

    }
    cout << "Total de votos:" << endl;
    cout << "Candidato 1: " << candidato1 << " votos" << endl;
    cout << "Candidato 2: " << candidato2 << " votos" << endl;
    cout << "Candidato 3: " << candidato3 << " votos" << endl;
    cout << "Candidato 4: " << candidato4 << " votos" << endl;
    cout << "Total de votos nulos: " << nulos << " votos" << endl;
    cout << "Total de votos branco: " << brancos << " votos" << endl;
    
}
