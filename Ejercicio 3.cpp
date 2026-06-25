// EJERCICIO 3:
// Escribir un programa que calcule el producto escalar de dos vectores. 
// Si v y w son los vectores y n su tamaño, el producto escalar se calcula como la sumatoria de V(i)*W(i).



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano de los vectores: ";
    cin >> n;
    
    float v[n], w[n];
    float productoEscalar = 0;

    cout << "\nVECTOR V:\n";
    for(int i = 0; i < n; i++) {
        cout << "v[" << i << "] = "; 
        cin >> v[i];
    }

    cout << "\nVECTOR W :\n";
    for(int i = 0; i < n; i++) {
        cout << "w[" << i << "] = "; 
        cin >> w[i];
        
        productoEscalar += (v[i] * w[i]); 
    }
    
    cout << "\nEl producto escalar es: " << productoEscalar << endl;
    return 0;
}
