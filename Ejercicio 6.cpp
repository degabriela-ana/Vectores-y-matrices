// EJERCICIO 6:
// Escribir un programa que devuelva el mínimo de los elementos de un vector.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del vector: ";
    cin >> n;
    
    float numero[n];
    
    cout << "\nVECTOR: \n";
    // Pedimos el primer dato y lo asumimos como el minimo
    cout << "numero[0] = "; 
    cin >> numero[0];
    
    float minimo = numero[0];

    for(int i = 1; i < n; i++) {
        cout << "numero[" << i << "] = "; 
        cin >> numero[i];
        
        if(numero[i] < minimo) {
            minimo = numero[i];
        }
    }
    
    cout << "\nEl menor elemento es: " << minimo << endl;
    return 0;
}
