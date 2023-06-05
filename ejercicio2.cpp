/*Ejercicio: Números pares e impares
 Descripción: Escribe un programa que reciba como entrada un número entero y muestre todos
los números pares e impares hasta ese número.
 Requisitos:
 - Utilizar un ciclo para recorrer los números.
 - Utilizar una bifurcación para determinar si un número es par o impar.
 - Utilizar una función para imprimir los números pares e impares.*/




#include <iostream>

using namespace std;

void imprimirNumerosParesImpares(int numero) {
    cout << "Numeros pares: ";
    for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    cout << "Numeros impares: ";
    for (int i = 0; i <= numero; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    imprimirNumerosParesImpares(numero);

    return 0;
}
