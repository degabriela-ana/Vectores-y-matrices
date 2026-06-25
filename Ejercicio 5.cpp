// EJERCICIO 5:
// Escribir un programa que calcule el vector resultante de sumar a cada una de las componentes de un vector dado, un número real.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del vector: ";
    cin >> n;
    
    float numero[n];
    float numeroSuma;

    cout << "\nVECTOR:\n";
    for(int i = 0; i < n; i++) {
        cout << "numero[" << i << "] = "; 
        cin >> numero[i];
    }

    cout << "\nIngrese un numero real para SUMAR al vector: "; 
    cin >> numeroSuma;

    cout << "\nVector resultante:\n";
    for(int i = 0; i < n; i++) {
        numero[i] = numero[i] + numeroSuma; 
        cout << "numero[" << i << "] = " << numero[i] << endl;
    }
    
    return 0;
}
