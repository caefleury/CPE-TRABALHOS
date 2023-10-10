#include <iostream>

using namespace std;

int main()
{
    int A,B,C;

    cout << "Digite o valor de A: " ;
    cin >> A;

    cout << "Digite o valor de B: " ;
    cin >> B;

    if (A == B){
        C = A + B;
    } else {
       C = A * B;
    }

    cout << "C: " << C;
}
