#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite um número inteiro positivo: ";
    cin >> n;

    if (n > 8) {
        for (int i = n; i >= 8; i--) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        for (int i = n; i <= 8; i++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
