
#include <iostream>

using namespace std;

int main()
{
    double distancia_km;
    double velocidade_kmh;

    cout << "Digite a distância entre os pontos em Km: ";
    cin >> distancia_km;
    cout << "Digite a velocidade em Km/h: ";
    cin >> velocidade_kmh;

    double tempo_horas = distancia_km / velocidade_kmh;

    double tempo_minutos = tempo_horas * 60;

    cout << "Tempo médio para percorrer a distância: " << tempo_minutos << " minutos" << endl;
    
     return 0;
}