#include <iostream>
using namespace std;

int main() {
    int n,num,maior,menor;
    
    cout << "Escolha quantos números para comparar: ";
    cin >> n;

    for (int i = 0;i < n;i++){
        cout << "Digite o numero: ";
        cin >> num;
        if (i == 0){
            maior = num;
            menor = num;
        } else {
            if (num > maior){
                maior = num;
            } else if (num < menor){
                menor = num;
            }
        }
    }
    cout << "Maior número: " << maior<<endl;
    cout << "Menor número: " << menor;

}
