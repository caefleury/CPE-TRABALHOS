#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double coeficienteA, coeficienteB, coeficienteC;
    
    cout << "Digite o coeficiente a: ";
    cin >> coeficienteA;
    cout << "Digite o coeficiente b: ";
    cin >> coeficienteB;
    cout << "Digite o coeficiente c: ";
    cin >> coeficienteC;
    
    double discriminante = coeficienteB * coeficienteB - 4 * coeficienteA * coeficienteC;
    
    if (discriminante > 0) {
        double raiz1 = (-coeficienteB + sqrt(discriminante)) / (2 * coeficienteA);
        double raiz2 = (-coeficienteB - sqrt(discriminante)) / (2 * coeficienteA);
        
        cout << "Raízes reais e diferentes: " << raiz1 << " e " << raiz2 << endl;
    } else if (discriminante == 0) {
        double raiz = -coeficienteB / (2 * coeficienteA);
        
        cout << "Raízes reais e iguais: " << raiz << endl;
    } else {
        double parteReal = -coeficienteB / (2 * coeficienteA);
        double parteImaginaria = sqrt(-discriminante) / (2 * coeficienteA);
        
        cout << "Raízes complexas e conjugadas: " << parteReal << " + " << parteImaginaria << "j e " << parteReal << " - " << parteImaginaria << "j" << endl;
    }
    
    return 0;
}
