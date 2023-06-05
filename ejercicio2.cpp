#include <iostream>

using namespace std;

void imprimirNumerosParesImpares(int numero) {
    cout << "Números pares: ";
    for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    cout << "Números impares: ";
    for (int i = 0; i <= numero; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    imprimirNumerosParesImpares(numero);

    return 0;
}
