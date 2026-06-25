// EJERCICIO 1:
// Programa que calcule la media de los elementos de un vector.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del vector: ";
    cin >> n;
    
    float vector[n];
    float suma = 0;

    // El indice i empieza en 0 y termina en n-1
    for(int i = 0; i < n; i++) {
        cout << "vector[" << i << "] = "; 
        cin >> vector[i];
        suma += vector[i];
    }
    
    cout << "\nLa media del vector es: " << suma / n << endl;
    return 0;
}
