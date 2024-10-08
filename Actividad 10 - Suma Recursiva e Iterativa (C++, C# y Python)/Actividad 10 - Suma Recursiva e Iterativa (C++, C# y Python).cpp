#include <iostream>
using namespace std;

// Función iterativa para sumar los dígitos de un número
int sumaIterativa(int n) {
    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    return suma + n;
}

// Función recursiva para sumar los dígitos de un número
int sumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    // Llamando a la función iterativa
    cout << "Suma de los dígitos (iterativa): " << sumaIterativa(numero) << endl;

    // Llamando a la función recursiva
    cout << "Suma de los dígitos (recursiva): " << sumaRecursiva(numero) << endl;

    return 0;
}