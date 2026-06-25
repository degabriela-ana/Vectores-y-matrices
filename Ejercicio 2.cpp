// EJERCICIO 2:
// Escribir un programa que calcule y devuelva la suma al cuadrado de las componentes de un vector


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del vector: ";
    cin >> n;
    
    int numero[n];
    int sumaCuadrados = 0;

    cout << "Vector:\n";
    for(int i = 0; i < n; i++) {
        cout << "numero[" << i << "] = ";
        cin >> numero[i];
        sumaCuadrados += (numero[i] * numero[i]);
    }
    
    cout << "\nLa suma de los cuadrados es: " << sumaCuadrados << endl;
    return 0;
}
