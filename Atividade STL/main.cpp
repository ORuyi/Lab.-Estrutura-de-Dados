#include "Pilha.h"
#include <iostream>

using namespace std;

int main() {
    Pilha P, P2;
    int n, d;

    cout << "Digite um valor n que seja maior que 1: ";
    cin >> n;

    d = 2;

    cout << "\nPara n = " << n << ":\n";

    while ( n > 1) {
        if ( n % d == 0 ) {
            P.Inserir(d);
            n /= d;
        } else {
            d++;
        }
    }

    P.Mostrar();
    P.Inverter();

    return 0;
}
