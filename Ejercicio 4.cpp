// EJERCICIO 4:
// Escribir el programa que calcule el producto de un número por un vector
// (devuelve el vector resultante de multiplicar todas las componentes del vector inicial por un número).


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del vector: ";
    cin >> n;
    
    float numero[n];
    float multiplicador;

    cout << "\n--VECTOR:\n";
    for(int i = 0; i < n; i++) {
        cout << "numero[" << i << "] = "; 
        cin >> numero[i];
    }

    cout << "\nIngrese un numero para MULTIPLICAR el vector: "; 
    cin >> multiplicador;

    cout << "\nVector resultante:\n";
    for(int i = 0; i < n; i++) {
        numero[i] = numero[i] * multiplicador; 
        cout << "numero[" << i << "] = " << numero[i] << endl;
    }
    
    return 0;
}
