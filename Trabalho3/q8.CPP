#include <iostream>

using namespace std;

int main()
{
    double idade1,idade2;
    float peso1,peso2;

    cout << "Digite a idade e o peso da pessoa1: " ;
    cin >> idade1 >> peso1;

    cout << "Digite a idade e o peso da pessoa2: " ;
    cin >> idade2 >> peso2;

    if (idade1 > idade2){
        cout << "A pessoa1 é mais velha e tem " << idade1 << "anos"<< endl;
    } else {
        cout << "A pessoa2 é mais velha e tem " << idade2 << "anos"<< endl;
    }

    if (peso1 < peso2){
        cout << "A pessoa1 é mais leve e tem " << peso1 << "kgs"<< endl;
    } else {
        cout << "A pessoa2 é mais leve e tem " << peso2 << "kgs"<< endl;
    }


}
