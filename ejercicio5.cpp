/*Ejercicio: Cálculo de factorial
 Descripción: Escribe un programa que reciba como entrada un número entero y calcule su
factorial.
 Requisitos:
 - Utilizar una función para calcular el factorial.
 - Utilizar un ciclo para realizar la multiplicación sucesiva.
 - Utilizar una bifurcación para manejar el caso de un número negativo.*/

#include <iostream>

using namespace std;

long long calcularFactorial(int numero) {
    if (numero < 0) {
        cout << "Error: El factorial no está definido para numeros negativos." << endl;
        return 0;
    }

    long long factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    long long factorial = calcularFactorial(numero);

    if (factorial != 0) {
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
